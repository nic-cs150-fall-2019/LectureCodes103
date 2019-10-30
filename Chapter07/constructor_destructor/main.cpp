#include <iostream>
using namespace std;

class Test
{
public:
    Test();
    string getName() const;

private:
    int x;
    int y;
    string name;
};

Test::Test()
{
    x = 1;
    y = 1;
    name = "Bob";
    cout << "constructor called in Test class\n";
}

string Test::getName() const
{
    return name;
}

void displayName(const Test& y)
{
    cout << y.getName() << endl;
}

int main()
{
    Test x;
    cout << x.getName();
    displayName(x);
    return 0;
}