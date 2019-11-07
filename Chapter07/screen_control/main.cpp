#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void placeCursor(HANDLE screen, int row, int col);
void printStars(int numStars);

int main()
{
    const int midRow = 12,
              midCol = 40,
              numBoxes = 3;

    HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
    system("cls");

    for (int box = 1, height = 1; box <= numBoxes; ++box, height+=2)
    {
        int startRow = midRow - box;
        int endRow = midRow + box;
        int width = box*5 + (box+1) % 2;

        placeCursor(screen, startRow, midCol-width/2);
        printStars(width);

        for (int sideRow = 1; sideRow <= height; ++sideRow)
        {
            placeCursor(screen, startRow + sideRow, midCol-width/2);
            cout << '*' << '\n';
            placeCursor(screen, startRow + sideRow, midCol+width/2);
            cout << '*' << '\n';
        }

        placeCursor(screen, endRow, midCol-width/2);
        printStars(width);

        Sleep(750);
    }

    placeCursor(screen, 20, 0); 
    return 0;
}

void placeCursor(HANDLE screen, int row, int col)
{
    COORD position;
    position.Y = row;
    position.X = col;
    SetConsoleCursorPosition(screen, position);
}

void printStars(int numStars)
{
    for (int star = 1; star <= numStars; ++star)
    {
        cout << '*';
    }
    cout << '\n';
}