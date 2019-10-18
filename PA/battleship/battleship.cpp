#include "battleship.h"


/**************************************************************
 * Function name: displayBoard
 * Description: This function prints the board game as a grid
 * on the screen. Function has three parameters. The first
 * parameter is a 2D-array representing the gameboard, the 
 * second parameter is the total number of rows in the board
 * and the third parameter is the total number of columns. The
 * does not return any value.
 **************************************************************/
void displayBoard(const char arr[][NUM_COLS], int rows, int cols)
{
    int i, j;

    cout << "   0 1 2 3 4 5 6 7 8 9\n";
    for (int i = 0; i < rows; i++)
    {
        cout << i << "  ";
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

/**************************************************************
 * Function name: initializedBoard
 * Description: This function initializes each element in the
 * board game 2D-array with the character '-'. Function has 
 * three parameters. The first parameter is a 2D-array 
 * representing the gameboard, the second parameter is the 
 * total number of rows in the board and the third parameter is
 * the total number of columns. The does not return any value.
 **************************************************************/
void initializedBoard(char arr[][NUM_COLS], int rows, int cols)
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

void randomlyPlaceShips(char arr[][NUM_COLS])
{
    // TODO later
    arr[0][9] = shipSymbols[CARRIER];
    arr[1][9] = shipSymbols[CARRIER];
    arr[2][9] = shipSymbols[CARRIER];
    arr[3][9] = shipSymbols[CARRIER];
    arr[4][9] = shipSymbols[CARRIER];
}

void manuallyPlaceShips(char arr[][NUM_COLS])
{
    // TODO later
    int cellsCarrier[10];
    cout << "Please enter the five cells to place the Carrier across: ";
    // TODO: Input validation
    cin >> cellsCarrier[0] >> cellsCarrier[1] 
        >> cellsCarrier[2] >> cellsCarrier[3]
        >> cellsCarrier[4] >> cellsCarrier[5]
        >> cellsCarrier[6] >> cellsCarrier[7]
        >> cellsCarrier[8] >> cellsCarrier[9];

    // Update board with CARRIER symbol
    arr[cellsCarrier[0]][cellsCarrier[1]] = shipSymbols[CARRIER];
    arr[cellsCarrier[2]][cellsCarrier[3]] = shipSymbols[CARRIER];
    arr[cellsCarrier[4]][cellsCarrier[5]] = shipSymbols[CARRIER];
    arr[cellsCarrier[6]][cellsCarrier[7]] = shipSymbols[CARRIER];
    arr[cellsCarrier[8]][cellsCarrier[9]] = shipSymbols[CARRIER];

    // cout << "Please enter the four cells to place the Battleship across: ";
    // cout << "Please enter the three cells to place the Cruiser across: ";
    // cout << "Please enter the three cells to place the Submarine across: ";
    // cout << "Please enter the two cells to place the Destroyer across: ";

    
}