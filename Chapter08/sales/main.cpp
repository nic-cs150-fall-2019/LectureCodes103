// Source: Modified Program 8-21 from 
// Starting out with C++ Early Objects 9th Edition
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

const int NUM_QTRS = 4;            // Number of quarters
const int NUM_DIVS = 3;            // Number of divisions

double computeTotal(const double array[][NUM_QTRS], int num_rows, int num_cols);
void printSumEachRow(const double array[][NUM_QTRS], int num_rows, int num_cols);
void printSumEachColumn(const double array[][NUM_QTRS], int num_rows, int num_cols);

int main()
{
    double sales[NUM_DIVS][NUM_QTRS];  // 2D array with 3 rows & 4 columns
    double totalSales = 0.0;           // Accumulates total sales
    
    ifstream inputFile;

    inputFile.open("sales.dat");

    cout << fixed << setprecision(2);

    if (!inputFile)
        cout << "Error opening file.";
    else
    {
        for (int div = 0; div < NUM_DIVS; ++div)
        {
            for (int qtr = 0; qtr < NUM_QTRS; ++qtr)
            {
                inputFile >> sales[div][qtr];
                cout << "Division " << (div + 1)
                     << " Quarter " << (qtr + 1) << ": $"
                     << sales[div][qtr] << '\n';
            }
        }

        double total = computeTotal(sales, NUM_DIVS, NUM_QTRS);
        cout << "Total: $" << total << '\n';

        printSumEachRow(sales, NUM_DIVS, NUM_QTRS);
        printSumEachColumn(sales, NUM_DIVS, NUM_QTRS);
    }
    
    
    return 0;
}

double computeTotal(const double array[][NUM_QTRS], int num_rows, int num_cols)
{
    double total = 0.0;
    for (int row = 0; row < num_rows; ++row)
    {
        for (int col = 0; col < num_cols; ++col)
        {
            total += array[row][col];
        }
    }
    return total;
}

void printSumEachRow(const double array[][NUM_QTRS], int num_rows, int num_cols)
{
    for (int row = 0; row < num_rows; ++row)
    {
        double rowTotal = 0.0;
        for (int col = 0; col < num_cols; ++col)
        {
            rowTotal += array[row][col];
        }
        double rowAverage = rowTotal / num_cols;
        cout << "Total for Division#" << (row + 1) << ": $" << rowTotal << '\n';
    }
}

void printSumEachColumn(const double array[][NUM_QTRS], int num_rows, int num_cols)
{
    for (int col = 0; col < num_cols; ++col)
    {
        double colTotal = 0.0;
        for (int row = 0; row < num_rows; ++row)
        {
            colTotal += array[row][col];
        }
        double colAverage = colTotal / num_rows;
        cout << "Total for Quarter#" << (col + 1) << ": $" << colTotal << '\n';
    }
}