#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int buddy = 20;
    int& bud = buddy;
    int& b = bud;
    bud = 12;
    cout << buddy << '\n';
    buddy = 100;
    cout << bud << '\n';
    b = 20;
    cout << buddy << '\n';


    ifstream trafficFile;

    // Open a file stream object for traffic file
    trafficFile.open("traffic_smaller_data.csv");

    // ID
    // Traffic Volume Count Location Address
    // Street
    // Date of Count
    // Total Passing Vehicle Volume
    // Vehicle Volume By Each Direction of Traffic

    int trafficVolumeNorth = 0;
    int trafficVolumeSouth = 0;
    int trafficVolumeEast = 0;
    int trafficVolumeWest = 0;

    if (trafficFile)
    {
        string line;
        getline(trafficFile, line);

        int rowCounter = 1;
        while (!trafficFile.eof())
        {
            //cout << "Data #" << rowCounter << '\n';
            int id;
            //getline(trafficFile, line, ',');
            //id = stoi(line);
            trafficFile >> id;
            trafficFile.ignore(1, ',');

            int volumeCount;
            //getline(trafficFile, line, ' ');
            //volumeCount = stoi(line);
            trafficFile >> volumeCount;
            trafficFile.ignore(1, ',');

            string direction;
            getline(trafficFile, direction, ',');

            if (direction == "North")
                trafficVolumeNorth += volumeCount;
            else if (direction == "South")
                trafficVolumeSouth += volumeCount;
            else if (direction == "East")
                trafficVolumeEast += volumeCount;
            else if (direction == "West")
                trafficVolumeWest += volumeCount;

            string street;
            getline(trafficFile, street, ',');

            string date;
            getline(trafficFile, date, ',');

            int totalPassing;
            //getline(trafficFile, line, ',');
            //totalPassing = stoi(line);
            trafficFile >> totalPassing;
            trafficFile.ignore(1, ',');

            string volumeByDirection;
            getline(trafficFile, volumeByDirection);

            //cout << "   ID: " << id << '\n';
            //cout << "   Volume Count: " << volumeCount << '\n';
            //cout << "   Direction: " << direction << '\n';
            //cout << "   Street: " << street << '\n';
            //cout << "   Date: " << date << '\n';
            //cout << "   Total Passing Volume Count: " << totalPassing << '\n';
            //cout << "   Volume By Direction: " << volumeByDirection << '\n';

            ++rowCounter;
        }
        cout << "Volume Count: \n";
        cout << "  North: " << trafficVolumeNorth << '\n';
        cout << "  South: " << trafficVolumeSouth << '\n';
        cout << "  West : " << trafficVolumeWest << '\n';
        cout << "  East : " << trafficVolumeEast << '\n';
        cout << "Total car volume: " << trafficVolumeNorth + trafficVolumeSouth + trafficVolumeEast + trafficVolumeWest << '\n';
        cout << "Total data: " << rowCounter << '\n';
    }
    else
    {
        cout << "BAD...";
    }

// Close the file stream object for traffic file
    trafficFile.close();

    return 0;
}
