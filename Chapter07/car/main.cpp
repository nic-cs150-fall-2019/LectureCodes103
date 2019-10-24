#include <iostream>
#include "car.h"
using namespace std;


int main()
{
    Car car;

    string make;
    cout << "Enter car make and model: ";
    getline(cin, make);
    car.setMake(make);

    int speed;
    cout << "Enter initial speed of car: ";
    cin >> speed;
    car.setSpeed(speed);

    int year;
    cout << "Enter car's year: ";
    cin >> year;
    car.setYear(year);

    string color;
    cout << "Enter car's color: ";
    cin.ignore();
    getline(cin, color);
    car.setColor(color);

    cout << "Car Make: " << car.getMake() << '\n';
    cout << "Car Year: " << car.getYear() << '\n';
    cout << "Car Color: " << car.getColor() << '\n';

    for (int i = 0; i < 5; ++i)
    {
        car.accelerate();
        cout << "Current speed: " << car.getSpeed() << "mph\n";
    }

    car.brake();
    cout << "Current speed: " << car.getSpeed() << "mph\n";

    return 0;
}