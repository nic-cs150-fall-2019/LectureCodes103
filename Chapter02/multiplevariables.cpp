// multiplevariables.cpp
// Description: Declaring multiple variables
// Gabe de la Cruz
// CS150 103
#include <iostream>

using namespace std;

int main()
{
    int floors = 15,
        rooms = 300,
        suites = 30,
        capacity = 100000;    // WRONG: capacity = 100,000

    // Display message to screen
    cout << "The Grand Hotel has " << floors << " floors" << endl;
    cout << "with " << rooms << " rooms and " << suites;
    cout << " suites.\nIt has a max capacity of ";
    cout << capacity << " people\n";

    return 0;
}
