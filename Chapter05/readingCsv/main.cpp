#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream trafficFile;

    // Open a file stream object for traffic file
    trafficFile.open("traffic_smaller_data.csv");

    // ID
    // Traffic Volume Count Location Address
    // Street
    // Date of Count
    // Total Passing Vehicle Volume
    // Vehicle Volume By Each Direction of Traffic

    if (trafficFile)
    {
        string line;
        int counter = 0;
        getline(trafficFile, line);
        //cout << line << '\n';



        while (getline(trafficFile, line, ','))
        {
            cout << line << '\n';
            counter++;
            if (counter == 6)
                break;
        }
    }
    else
    {
        cout << "BAD...";
    }


    // Close the file stream object for traffic file
    trafficFile.close();

    return 0;
}
