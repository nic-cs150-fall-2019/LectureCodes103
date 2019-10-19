#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream readFile;

    readFile.open("demo.txt");

    cout << "Now reading data from a file.\n";

    string name;
    while (getline(readFile, name))
    {
        cout << name << '\n';
    }

    readFile.close();

    cout << "Done.\n";

    return 0;
}
