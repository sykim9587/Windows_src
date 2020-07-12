#ifndef _PIDIR_h
#define _PIDIR_h
#include <stdint.h>

/*Here, the definition of the PID class begins. This is indicated by the keyword: "class"
  This is a general description of the data and functions that the class contains.
  To use a class, we must make a specific instance of the class by declaring it into the same way we declare a variable.
  For example, to create a version of the PID class, in our main file we might write:

  PID LeftWheelPID;
  PID RightWheelPID;

  This will create two instances of the PID class; one for the left wheel and one for the right wheel.
  Each class will have a full copy of all the variables and functions defined for that particular class.
*/

class PIDIR
{
    /* Public functions and variables are defined here. A public function / variable can be accessed from outside
       the class.
       For example, once we have made an instance of the PID class, we can call the update function by writing:

       LeftWheelPID.update();

       Note that this will only update the LeftWheelPID - RightWheelPID will not be updated unless we also call
       RightWheelPID.update()
    */
  public:

    PIDIR(float P, float D, float I); // This is the class constructor. It is called whenever we create an instance of the PID class
    void setGains(float P, float D, float I); // This function updates the values of the gains
    void reset(); //This function resets any stored values used by the integral or derative terms
    float update(float demand, float measurement); //This function calculates the PID control signal. It should be called in a loop
    void print_components(); //This function prints the individual components of the control signal and can be used for debugging
    void setMax(float  newMax); //This function sets the maximum output the controller can ask for
    void setDebug(bool state); //This function sets the debug flag;
    void print_response(); // This function prints the ratio of input to output in a way that is nicely interpreted by the Serial plotter
    void set_show_response(bool state); //This functions set the show_response flag

    /* Private functions and variables are defined here. These functions / variables cannot be accessed from outside the class.
       For example, if we try to set the value of Kp in the file "Romi.h", we will get an error (Try it out!)
    */
  private:

    //Control gains
    float Kp; //Proportional
    float Ki; //Integral
    float Kd; //Derivative

    //We can use this to limit the output to a certain value
    float max_output = 150;

    //Output components
    //These are used for debugging purposes
    float Kp_output = 0;
    float Ki_output = 0;
    float Kd_output = 0;
    float total = 0;

    //Values to store
    float last_demand = 0; //For storing the previous input
    float last_measurement = 0; //For storing the last measurement
    float last_error = 0; //For calculating the derivative term
    float integral_error = 0; //For storing the integral of the error
    long last_millis = 0;
    bool debug = false; //This flag controls whether we print the contributions of each component when update is called
    bool show_response = false; // This flag controls whether we print the response of the controller on each update

};

/*
   Class constructor
   This runs whenever we create an instance of the class
*/
PIDIR::PIDIR(float P, float D, float I)
{
  //Store the gains
  setGains(P, D, I);
  //Set last_millis
  last_millis = millis();
}

/*
   This function prints the individual contributions to the total contol signal
   You can call this yourself for debugging purposes, or set the debug flag to true to have it called
   whenever the update function is called.
*/
void PIDIR::print_components()
{
  Serial.print(" Proportional component: ");
  Serial.print(Kp_output);
  Serial.print(" Differential component: ");
  Serial.print(Kd_output);
  Serial.print(" Integral component: ");
  Serial.print(Ki_output);
  Serial.print(" Total: ");
  Serial.println(total);
}

/*
   This function sets the gains of the PID controller
*/
void PIDIR::setGains(float P, float D, float I)
{
  Kp = P;
  Kd = D;
  Ki = I;
}

/*
   This is the update function.
   This function should be called repeatedly.
   It takes a measurement of a particular variable (ex. Position, speed, heading) and a desired value for that quantity as input
   It returns an output; this can be sent directly to the motors,
   combined with other control outputs
   or sent as input to another controller
*/
float PIDIR::update(float demand, float measurement)
{
  //Calculate how much time (in milliseconds) has passed since the last update call
  long time_now = millis();
  int time_delta = time_now - last_millis;
  last_millis = time_now;

  /*
     ================================
     Your implementation of a PID controller should go here
     ================================
  */

  //This represents the error term
  float error = demand - measurement;
  //This represents the error derivative
  float error_delta = (error - last_error) / time_delta;

  //Update storage
  last_demand = demand;
  last_measurement = measurement;
  integral_error += (error * time_delta);

  /*
     ===========================
     Code below this point should not need to be changed
  */

  //Calculate components
  Kp_output = Kp * error;
  Kd_output = Kd * error_delta;
  Ki_output = Ki * integral_error;

  //Add the three components to get the total output
  total = Kp_output + Kd_output; // changed
  //Make sure we don't exceed the maximum output
  if (total > max_output)
  {
    total = max_output;
  }

  if (total < -max_output)
  {
    total = -max_output;
  }

  //Print debugging information if required
  if (debug)
  {
    Serial.print("Error: ");
    Serial.print(error);
    Serial.print(" Error Delta:");
    Serial.print(error_delta);
    Serial.print(" Error Integral:");
    Serial.print(integral_error);
    print_components();
  }

  //Print response if required
  if (show_response)
  {
    print_response();
  }

  return total;
}

void PIDIR::setMax(float newMax)
{
  if (newMax > 0)
  {
    max_output = newMax;
  }
  else
  {
    Serial.println("Max output must be positive");
  }
}

void PIDIR::setDebug(bool state)
{
  debug = state;
}

void PIDIR::reset()
{

  last_error = 0;
  integral_error = 0;
  last_millis = millis();

}

//This function prints measurement / demand - Good for visualiser the response on the Serial plotter
void PIDIR::print_response()
{
  float response = last_measurement / last_demand;
  Serial.println(response);
}

void PIDIR::set_show_response(bool state)
{
  show_response = state;
}


#endif
