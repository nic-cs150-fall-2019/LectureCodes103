#include<iostream>
using namespace std;

class Employee2
{
public:
    string st_name;
    int st_numUsedDays;
};

struct Employee
{
    string st_name;
    int st_numUsedDays;

    Employee(string name = "", int usedDays = 0)
    {
        st_name = name;
        st_numUsedDays = usedDays;
    }
};

int main()
{
    Employee e1, e2("John", 3);
    cout << e1.st_name << '\n';
    cout << e1.st_numUsedDays << '\n';

    cout << e2.st_name << '\n';
    cout << e2.st_numUsedDays << '\n';

    return 0;
}