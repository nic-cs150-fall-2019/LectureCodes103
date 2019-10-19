#include "gym.h"


/*************************************************************
 * Function: getChoice
 * Description: This function inputs, validates, and returns
 *   the user's menu choice.
 *************************************************************/
int getChoice()
{
    int choice;

    while (1)
    {
        cout << "Enter your choice: ";
        cin >> choice;

        if ((choice >= 1) && (choice <= 4))
            break;

        cout << "The only valid choices are 1-4. Please re-enter. ";
    }

    return choice;
}

/*************************************************************
 * Function: showFees
 * Description: This function uses the membership type,
 * monthly rate, and number of months passed to it as arguments
 * to compute and display a member's total charges. It then
 * holds the screen unti the user presses the ENTER key. This
 * is necessary because after returning from this function
 * the displayMenu function will be called, and it will clear
 * the screen.
 *************************************************************/
void showFees(string memberType, double rate, int months)
{
    cout << '\n'
         << "Membership Type : " << memberType << "     "
         << "Number of months: " << months << '\n'
         << "Total charges   : $" << (rate * months) << '\n';

    // Hold the screen until the user presses the ENTER key.
    cout << "\nPress the Enter key to return to the menu. ";
    cin.ignore(); // Clear the previous \n out of the input buffer
    cin.get();    // Wait for the user to press ENTER
}
