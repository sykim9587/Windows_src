#ifndef _Kinematics
#define _Kinematics_h
#include <math.h>


class Kinematics
{
  public:
    //Public variables and methods go here
    Kinematics(float X, float Y, float theta);
    void setK(float X, float Y, float theta);
    void update(int count_e0, int count_e1); // estimated position
    float X_new = 0;
    float Y_new = 0;
    float X_old = 0;
    float Y_old = 0;
    float distance = 0;

    int count_e0_last = 0;
    int count_e1_last = 0;
    float new_theta = 0;
    float old_theta = 0;
    float goinghome();
    //float homedistance();
    float dx = 0;
    float dy = 0;
    float homeD = 0;
  private:
    //Private variables and methods go here
    long last_millis = 0;
    float X_initial = 0;
    float Y_initial = 0;
    float theta_initial = 0;
};

Kinematics::Kinematics (float X, float Y, float theta)
{
  setK(X, Y, theta);
  last_millis = millis();
}

void Kinematics::setK(float X, float Y, float theta)
{
  X_initial = X;
  Y_initial = Y;
  theta_initial = theta;
}

float Kinematics::goinghome()
{
  dy = X_initial - X_new;
  dx = Y_initial - Y_new;
  Serial.print("dx:");
  Serial.print(dx);
  Serial.print("dy:");
  Serial.print(dy);
  Serial.print("new theta:");
  Serial.print(new_theta);

  double targethead = 1.5708 - (new_theta) - (atan2(dy, dx)); //changed it so that it works..
  if (targethead > 3.14) {
    targethead = -(2 * 3.1416 - targethead);
  }


  //float headmove = targethead - new_theta;
  homeD = sqrt(dx * dx + dy * dy) / 0.15; //in count
  return targethead; //in radian

}



void Kinematics::update(int count_e0, int count_e1)
{
  long time_now = millis();
  int time_delta = time_now - last_millis;
  last_millis = time_now;


  int count_left = count_e0 - count_e0_last;
  int count_right = count_e1 - count_e1_last;

  new_theta = old_theta + (count_left * 0.15 - count_right * 0.15) / 140;

  distance = (count_left * 0.15 + count_right * 0.15) / 2; //use time_delta? angular velocity?

  X_new = X_old + distance * cos(new_theta);
  Y_new = Y_old + distance * sin(new_theta);


  X_old = X_new;
  Y_old = Y_new;

  count_e0_last = count_e0;
  count_e1_last = count_e1;

  old_theta = new_theta;

}





#endif
