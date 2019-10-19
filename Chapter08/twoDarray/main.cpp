#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int ROW_SIZE = 3;
const int COL_SIZE = 2;

void readFileToArray(ifstream& file, int array[], int size);
void printArray(const int array[], int size);
int computeTotalOfArray(const int array[], int size);
int findHighest(const int array[], int size);
int findLowest(const int array[], int size);

void print2dArray(const int array[][COL_SIZE], int numRows, int numCols);
int computeTotal2dArray(const int array[][COL_SIZE], int numRows, int numCols);
void computeSumRows2dArray(const int array[][COL_SIZE], int numRows, int numCols);
void computeSumCols2dArray(const int array[][COL_SIZE], int numRows, int numCols);

int main()
{
    const int NUM_EMPLOYEES = 6;
    int hours[NUM_EMPLOYEES];
    double overtimePay[NUM_EMPLOYEES] = {0.0};

    
    int numbers[ROW_SIZE][COL_SIZE] = {{1, 3}, {20, 18}, {10, 9}};

    int total = 0;
    print2dArray(numbers, ROW_SIZE, COL_SIZE);
    total = computeTotal2dArray(numbers, ROW_SIZE, COL_SIZE);
    computeSumRows2dArray(numbers, ROW_SIZE, COL_SIZE);
    computeSumCols2dArray(numbers, ROW_SIZE, COL_SIZE);
    cout << "total: " << total << '\n';


    ifstream inputFile;
    inputFile.open("work.txt");

    if (!inputFile)
        cout << "Error opening data file\n";
    else
    {
        readFileToArray(inputFile, hours, NUM_EMPLOYEES);
        inputFile.close();
        // TODO Read the file in a function, passed the array
        

        // TODO: Display hours worked using a function
        cout << "The hours are: ";
        // for (int i = 0; i < NUM_EMPLOYEES; ++i)
        // {
        //     cout << " " << hours[i];
        // }
        // cout << '\n';
        printArray(hours, NUM_EMPLOYEES);

        // TODO Compute overtime pay, if worker hours > 40
        // overTimePay = (hours - 40) * 15.0;

        // Display overtime pay
        cout << "Computer overtime pay:\n";


        // Do this after const argument
        // TODO: Get hours total of the array
        int total = 0;
        total = computeTotalOfArray(hours, NUM_EMPLOYEES);
        // TODO: get highest number in the array
        int highest;
        highest = findHighest(hours, NUM_EMPLOYEES);
        // TODO: get lowest number in the array
        int lowest;
        lowest = findLowest(hours, NUM_EMPLOYEES);
        cout << "\nFile statistics\n";
        cout << "Total Hours: " << total << '\n';
        cout << "Highest Hour: " << highest << '\n';
        cout << "Lowest Hour: " << lowest << '\n';
    }

    return 0;
}

void readFileToArray(ifstream& file, int array[], int size)
{
    int count = 0;
    while (count < size && file >> array[count])
    {
        ++count;
    }
}

void printArray(const int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << array[i] << " ";
    }
    cout << '\n';
}

int computeTotalOfArray(const int array[], int size)
{
    int total = 0; // accumulator
    for (int i = 0; i < size; ++i)
    {
        total += array[i];
    }
    return total;
}

int findHighest(const int array[], int size)
{
    int highest = array[0];
    for (int i = 1; i < size; ++i)
    {
        if (array[i] > highest)
        {
            highest = array[i];
        }
    }
    return highest;
}

int findLowest(const int array[], int size)
{
    int lowest = array[0];
    for (int i = 1; i < size; ++i)
    {
        if (array[i] < lowest)
        {
            lowest = array[i];
        }
    }
    return lowest;
}

void print2dArray(const int array[][COL_SIZE], int numRows, int numCols)
{
    for (int row = 0; row < numRows; ++row)
    {
        for (int col = 0; col < numCols; ++col)
        {
            cout << array[row][col] << " ";
        }
        cout << '\n';
    }
}

int computeTotal2dArray(const int array[][COL_SIZE], int numRows, int numCols)
{
    int total = 0;
    for (int row = 0; row < numRows; ++row)
    {
        for (int col = 0; col < numCols; ++col)
        {
            total += array[row][col];
        }
    }
    return total;
}

void computeSumRows2dArray(const int array[][COL_SIZE], int numRows, int numCols)
{
    int rowTotal;
    for (int row = 0; row < numRows; ++row)
    {
        rowTotal = 0;
        for (int col = 0; col < numCols; ++col)
        {
            rowTotal += array[row][col];
        }
        cout << "Row " << (row + 1) << " has total of " << rowTotal << '\n';
    }
}

void computeSumCols2dArray(const int array[][COL_SIZE], int numRows, int numCols)
{
    int colTotal;
    for (int col = 0; col < numCols; ++col)
    {
        colTotal = 0;
        for (int row = 0; row < numRows; ++row)
        {
            colTotal += array[row][col];
        }
        cout << "Column " << (col + 1) << " has total of " << colTotal << '\n';
    }
}