#include <iostream>
#include "battleship.h"
using namespace std;


int main()
{
    char p1SolutionGrid[NUM_ROWS][NUM_COLS]; // 10 x 10 chars

    fillArray(p1SolutionGrid, NUM_ROWS, NUM_COLS);
    // task: printArray(twoD, numRows, numCols);
    // that prints the two d array as a grid
    printArray(p1SolutionGrid, NUM_ROWS, NUM_COLS);

    // task: randomlyPlaceShips(p1SolutionGrid);
    // randomlyPlaceShips(p2SolutionGrid);
    // in this function, something like ...
    // for each ship i in our parallel arrays of ships
    //     all randomlyPlaceSingleShip(grid, shipNames[i], shipSymbols[i], shipSizes[i]);

    return 0;
}