#include <iostream>
using namespace std;

int main()
{
    int temp[3][2][4] = {{{1,  2,  3,  4}, {2,  4,  6,  8}}, 
                         {{3,  6,  9, 12}, {4,  8, 12, 16}}, 
                         {{5, 10, 15, 20}, {6, 12, 18, 24}}};

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            for (int k = 0; k < 4; ++k)
            {
                cout << "temp[" << i << "][" << j << "][" << k << "] = " << temp[i][j][k] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}