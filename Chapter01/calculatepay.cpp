// calculatepay.cpp
// This program calculates the user's pay
// Gabe de la Cruz
// CS150 103
#include <iostream>

using namespace std;

int main()
{
    double hours, rate, pay;

    // Get the number of hours worked.
    cout << "How many hours did you work? ";
    cin >> hours;

    // Get the hourly pay rate.
    cout << "Hour much do you get paid per hour? ";
    cin >> rate;

    // Calculate the pay
    pay = hours * rate;

    // Display the pay.
    cout << "You have earned $" << pay << endl;

    return 0;
}
