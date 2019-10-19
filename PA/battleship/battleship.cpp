#include "battleship.h"


/**************************************************************
 * Function name: printArray
 * Description: This function prints the board game as a grid
 * on the screen. Function has three parameters. The first
 * parameter is a 2D-array representing the gameboard, the 
 * second parameter is the total number of rows in the board
 * and the third parameter is the total number of columns. The
 * does not return any value.
 **************************************************************/
void printArray(const char arr[][NUM_COLS], int rows, int cols)
{
    int i, j;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

/**************************************************************
 * Function name: fillArray
 * Description: This function initializes each element in the
 * board game 2D-array with the character '-'. Function has 
 * three parameters. The first parameter is a 2D-array 
 * representing the gameboard, the second parameter is the 
 * total number of rows in the board and the third parameter is
 * the total number of columns. The does not return any value.
 **************************************************************/
void fillArray(char arr[][NUM_COLS], int rows, int cols)
{
    // outer loop iterates over each row
    for (int i = 0; i < rows; i++)
    {
        // inner loop iterates over int in arr[i] (row)
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = '-';
        }
    }
}