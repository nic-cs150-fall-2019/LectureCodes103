#include <iostream>
#include <cstdlib>
#include <ctime>
#include "battleship.h"
using namespace std;


int main()
{
    srand(time(0));
    char p1board[NUM_ROWS][NUM_COLS]; // 10 x 10 chars
    char p2board[NUM_ROWS][NUM_COLS];

    // initialize player 1 board
    initializedBoard(p1board, NUM_ROWS, NUM_COLS);
    // initialize palyer 2 board
    initializedBoard(p2board, NUM_ROWS, NUM_COLS);


    // task: printArray(twoD, numRows, numCols);
    // that prints the two d array as a grid
    cout << "Player 1 board:\n";
    displayBoard(p1board, NUM_ROWS, NUM_COLS);

    // TODO: randomlyPlaceShips(p1SolutionGrid);
    cout << "Please select from the following menu:\n";
    cout << "1. Enter positions of ships manually.\n";
    cout << "2. Allow the program to randomly select positions of ships.\n";

    int menuChoice;
    // TODO: Add input validation later
    cout << "Enter choice: ";
    cin >> menuChoice;

    if (menuChoice == 1)
    {
        // manually
        manuallyPlaceShips(p1board);
    }
    else if (menuChoice == 2)
    {
        // randomly
        randomlyPlaceShips(p1board);
    }

    // Setup player 2 board
    randomlyPlaceShips(p2board);
    
    // player starts randomly between 1 or 2
    int player = rand() % 2 + 1;
    while (1)
    {
        // switches between players
        if (player == 1)
        {
            cout << "Player 1 board:\n";
            displayBoard(p1board, NUM_ROWS, NUM_COLS);

            // TODO: Ask user for row and column to hit?
            // TODO: check if that is valid row and column

            // TODO: update board
            // TODO: test if the ship has sunk
            // TODO: check if player won!

            // TODO: logging to file

            displayBoard(p1board, NUM_ROWS, NUM_COLS);

            player = 2;
        }
        else // player 2
        {
            cout << "Player 2 board:\n";
            // TODO: make another function to display player 2's board
            // based on the instructions
            displayBoard(p2board, NUM_ROWS, NUM_COLS);

            // TODO: randomly generate row and column to hit
            // TODO: check if that is valid row and column

            // TODO: update board
            // TODO: test if the ship has sunk
            // TODO: check if player won!

            // TODO: logging to file

            displayBoard(p2board, NUM_ROWS, NUM_COLS);

            player = 1;
        }
    }

    return 0;
}