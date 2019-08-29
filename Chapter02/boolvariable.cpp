// boolvariable.cpp
// Description: Discuss about boolean variables
// Gabe de la Cruz
// CS150 103
#include <iostream>

using namespace std;

int main()
{
    // Declare and initialize isRaining boolean variable as false(0)
    bool isRaining = false;

    // Overwrite value of isRaining with true(1)
    isRaining = true;
    cout << "Is it raining? " << isRaining;

    // Overwrite value of isRaining with false(0)
    isRaining = false;
    cout << "\nIs it raining still? " << isRaining;

    return 0;
}
