// usingsizeofop.cpp
// Description: Discuss how to get the size of data types or variables
// Gabe de la Cruz
// CS150 103
#include <iostream>
using namespace std;

int main()
{
    double peaches;

    cout << "The size of a short integer is " << sizeof(short)
         << " bytes.\n";

    cout << "The size of a long integer is " << sizeof(long)
         << " bytes.\n";

    cout << "A peach can be eaten in " << sizeof(peaches)
         << " bytes or " << sizeof(peaches) * 2 << " nibbles.";

    return 0;
}
