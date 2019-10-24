#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>
using namespace std;

const int SPEED_CHANGE = 5;

class Car
{
public:
    int getYear();
    string getMake();
    int getSpeed();
    string getColor();
    void setYear(int year);
    void setMake(string make);
    void setSpeed(int speed);
    void setColor(string color);
    void accelerate();
    void brake();

private:
    int m_year;
    string m_make;
    int m_speed;
    string m_color;
};

#endif