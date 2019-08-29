// variables.cpp
// Description: Working with characters. Demonstrate that characters
//    are internally represented as integers and that
//    characters are just special integers.
// Gabe de la Cruz
// CS150 103
#include <iostream>

using namespace std;

int main()
{
    // Declare character variable
    char letter;

    // ASCII value of 'A' is 65, 65 + 10 = 75
    // Check the ASCII table which character has decimal value of 75
    // Its also simply the 10th letter after capital letter A
    letter = 'A' + 10;
    cout << letter << endl;

    // Similarly, this is simply the 12th letter after small letter c
    letter = 'c' + 12;
    cout << letter << endl;

    return 0;
}
