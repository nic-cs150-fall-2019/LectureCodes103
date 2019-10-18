#ifndef BATTLESHIP_H
#define BATTLESHIP_H

#include <iostream>
using namespace std;

// CARRIER=0, BATTLESHIP=1, CRUISER=2, SUBMARINE=3, DESTROYER=4
enum ships{CARRIER, BATTLESHIP, CRUISER, SUBMARINE, DESTROYER};

// Global constants
const int NUM_ROWS = 10;
const int NUM_COLS = 10;

// lets store ship info in 3 parallel arrays
const string shipNames[] = {"carrier", "battleship", "cruiser", "submarine", "destroyer"};
const char shipSymbols[] = {'c', 'b', 'r', 's', 'd'};
// task: one more parallel array for ship sizes
const int shipSizes[] = {5, 4, 3, 3, 2};

// Function prototypes
void initializedBoard(char arr[][NUM_COLS], int rows, int cols);
void displayBoard(const char arr[][NUM_COLS], int rows, int cols);
void randomlyPlaceShips(char arr[][NUM_COLS]);
void manuallyPlaceShips(char arr[][NUM_COLS]);

#endif