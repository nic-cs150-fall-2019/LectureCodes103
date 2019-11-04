#include <iostream>
#include "client.h"
#include "image.h"
using namespace std;

int main()
{
    Image image;
    char repeat = 'Y';

    while (repeat == 'Y' || repeat == 'y')
    {
        readImageFile(image);
        showImageInfo(image);
        showMenu();
        while (1)
        {
            int choice;
            cout << "Enter choice: ";
            cin >> choice;
            cin.ignore();

            if (choice == 1)
            {
                image.applyVerticalFlip();
                cout << "Image modification \"vertical flip\" complete.\n";
            }
            else if (choice == 2)
            {
                image.applyHorizontalFlip();
                cout << "Image modification \"horizontal flip\" complete.\n";
            }
            else if (choice == 3)
            {
                image.applyNegative();
                cout << "Image modification \"negative\" complete.\n";
            }
            else if (choice == 4)
            {
                image.applyHighContrast();
                cout << "Image modification \"high contrast\" complete.\n";
            }
            else if (choice == 5)
            {
                image.applyRandomNoise();
                cout << "Image modification \"random noise\" complete.\n";
            }
            else if (choice == 6)
            {
                image.removeRed();
                cout << "Image modification \"remove red\" complete.\n";
            }
            else if (choice == 7)
            {
                image.removeGreen();
                cout << "Image modification \"remove green\" complete.\n";
            }
            else if (choice == 8)
            {
                image.removeBlue();
                cout << "Image modification \"remove blue\" complete.\n";
            }
            else if (choice == 9)
            {
                image.printModifications();
                string filename = getFilename();
                bool success = image.writeImage(filename);
                if (success)
                {
                    cout << "Writing image complete.\n";
                }
                else
                {
                    cout << "Writing not successful! Check filename and try again!\n";
                }
                
            }
            else if (choice == 10)
            {
                image.printModifications();
                string filename = getFilename();
                bool success = image.writeGrayScale(filename);
                if (success)
                {
                    cout << "Writing grayscale image complete.\n";
                }
                else
                {
                    cout << "Writing not successful! Check filename and try again!\n";
                }
                
            }
            else if (choice == 11)
            {
                cout << "Exiting image modification menu...\n";
                break;
            }
            else
            {
                cout << "Invalid! ";
            }
        }

        cout << "Try another image [Y/N]: ";
        cin >> repeat;
    }

    return 0;
}