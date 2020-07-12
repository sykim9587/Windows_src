#ifndef _Line_follow_h
#define _Line_follow_h

//Number of readings to take for calibration
const int NUM_CALIBRATIONS = 100;

/* 
 *  Class to represent a single line sensor
 */
class Line_Sensor
{
  public:
    //Constructor
    Line_Sensor(int pin);
    //Calibrate
    void calibrate();
    //Return the uncalibrated value from the sensor
    int read_raw();
    //Return the calibrated value from the sensor
    int read_calibrated();
    
  private:
  
    int pin;
    float cal_sum=0;
    float cal_avg=0;
  
    
};

Line_Sensor::Line_Sensor(int Line_pin)
{
  pin = Line_pin;
  pinMode(pin, INPUT);
}

int Line_Sensor::read_raw()
{
  return analogRead(pin);
}

void Line_Sensor::calibrate()
{
  cal_sum=0;
  cal_avg=0;
  for(int i=0;i<NUM_CALIBRATIONS;i++){
    cal_sum=cal_sum+analogRead(pin);
  }
  cal_avg=cal_sum/NUM_CALIBRATIONS;
  Serial.println(cal_avg);

}

int Line_Sensor::read_calibrated()
{
  return analogRead(pin)-cal_avg;
}


#endif
