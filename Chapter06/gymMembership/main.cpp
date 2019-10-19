// This menu-driven Health Club membership program carries out the
// appropriate actions based on the menu choice entered. A do-while loop
// allows the program to repeat until the user selects menu choice 4.
#include <iostream>
#include <iomanip>
using namespace std;

#include "display.h"
#include "gym.h"

int main()
{
    enum MemberType {Adult=1, Child, Senior};

    // Constants for membership rates
    const double ADULT_RATE = 120.0;
    const double CHILD_RATE = 60.0;
    const double SENIOR_RATE = 100.0;

    int choice;         // Menu choice

    // Set numeric output formatting
    cout << fixed << setprecision(2);

    do
    {
        displayMenu();
        choice = getChoice();

        // Process the user's choice
        if (choice != 4)
        {
            int months;         // Number of months
            cout << "For how many months? ";
            cin >> months;

            // Compute charges based on user input
            switch (choice)
            {
                case Adult:
                    showFees("Adult", ADULT_RATE, months);
                    break;

                case Child:
                    showFees("Child", CHILD_RATE, months);
                    break;

                case Senior:
                    showFees("Senior", SENIOR_RATE, months);
            }
        }
    } while (choice != 4);

}

