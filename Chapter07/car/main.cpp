#include <iostream>
#include <vector>
#include "car.h"
using namespace std;


int main()
{
    vector<Car> cars;

    for (int i = 0; i < 3; ++i)
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
        cars.size();
        cars.push_back(car);
    }

    cout << "Cars for sale!!!\n";
    for (int i = 0; i < cars.size(); ++i)
    {
        cout << "Car #" << (i + 1) << '\n';
        cout << "  Car Make: " << cars[i].getMake() << '\n';
        cout << "  Car Year: " << cars[i].getYear() << '\n';
        cout << "  Car Color: " << cars[i].getColor() << '\n';
    }

    // for (int i = 0; i < 5; ++i)
    // {
    //     car.accelerate();
    //     cout << "Current speed: " << car.getSpeed() << "mph\n";
    // }

    // car.brake();
    // cout << "Current speed: " << car.getSpeed() << "mph\n";

    return 0;
}