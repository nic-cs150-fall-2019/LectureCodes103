#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

const int MAX_NUM = 30;

class Stats
{
public:
    Stats(); // default constructor
    double getTotal();
    double getAverage();
    int getLowest();
    int getHighest();
    double getData(int index);
    bool storeValue(double value);

private:
    double m_data[MAX_NUM];
    int m_numValues;
};

Stats::Stats()
{
    m_numValues = 0;
}

double Stats::getData(int index)
{
    return m_data[index];
}

double Stats::getTotal()
{
    double total = 0;
    for (int i = 0; i < m_numValues; ++i)
    {       
        total += m_data[i];
    }
    return total;
}

double Stats::getAverage()
{
    return getTotal() / m_numValues;
}

int Stats::getLowest()
{
    int lowest = 0;
    for (int i = 1; i < m_numValues; ++i)
    {
        if (m_data[i] < m_data[lowest])
        {
            lowest = i;
        }
    }
    return lowest;
}

int Stats::getHighest()
{
    int highest = 0;
    for (int i = 1; i < m_numValues; ++i)
    {
        if (m_data[i] > m_data[highest])
        {
            highest = i;
        }
    }
    return highest;
}

bool Stats::storeValue(double value)
{
    // keep track how many is in the array
    // make sure no more than 30 values are accepted
    // return true if value is added to array otherwise false
    bool isAdded = true;
    if (m_numValues < MAX_NUM)
    {
        // add value to array
        m_data[m_numValues] = value;
        ++m_numValues; // m_numvalues++
    }
    else
    {
        isAdded = false;
    }

    return isAdded;
}


int main()
{
    Stats trackTeam;
    string players[12];

    // Get starting timepoint
    auto start = high_resolution_clock::now();
    for (int i = 0; i < 5; ++i)
    {
        cout << "Player name: ";
        cin.ignore();
        getline(cin, players[i]);

        double dashTime;
        cout << "100-yard dash time: ";
        cin >> dashTime;
        trackTeam.storeValue(dashTime);
    }
    // Get ending timepoint 
    auto stop = high_resolution_clock::now(); 

    duration<double, milli> fp_ms = stop - start;
    cout << "Time taken: "
         << fp_ms.count() << " ms" << endl;

    cout << "\n       Tulsa Tigers Track Team\n";
    cout << "Average 100 yard-dash time: " << trackTeam.getAverage() << " seconds\n";
    int slowPlayerNum = trackTeam.getHighest();
    cout << "Slowest runner: " << players[slowPlayerNum] << " " 
         << trackTeam.getData(slowPlayerNum) << " seconds\n";
    int fastPlayerNum = trackTeam.getLowest();
    cout << "Fastest runner: " << players[fastPlayerNum] << " " 
         << trackTeam.getData(fastPlayerNum) << " seconds\n";

    return 0;
}