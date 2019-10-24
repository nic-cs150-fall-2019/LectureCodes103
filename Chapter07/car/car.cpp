#include "car.h"

int Car::getYear()
{
    return m_year;
}

string Car::getMake()
{
    return m_make;
}

int Car::getSpeed()
{
    return m_speed;
}

string Car::getColor()
{
    return m_color;
}

void Car::setYear(int year)
{
    m_year = year;
}

void Car::setMake(string make)
{
    m_make = make;
}

void Car::setSpeed(int speed)
{
    if (speed >= 0)
    {
        m_speed = speed;
    }
    else
    {
        m_speed = 0.0;
        cout << "Invalid speed! Using default value of 0.0";
    }
    
}

void Car::setColor(string color)
{
    m_color = color;
}

void Car::accelerate()
{
    m_speed += SPEED_CHANGE;
}

void Car::brake()
{
    m_speed -= SPEED_CHANGE;
    if (m_speed < 0)
    {
        m_speed = 0.0;
    }
}