#include "client.h"

void showMenu()
{
    cout << "\nIMAGE MENU\n";
    cout << "==========\n";
    cout << " 1. Flip the image vertically\n";
    cout << " 2. Flip the image horizontally\n";
    cout << " 3. Negate the colors\n";
    cout << " 4. Apply a high contrast\n";
    cout << " 5. Apply random noise\n";
    cout << " 6. Remove red channel\n";
    cout << " 7. Remove green channel\n";
    cout << " 8. Remove blue channel\n";
    cout << " 9. Write PPM Image\n";
    cout << "10. Write Grayscale PGM Image\n";
    cout << "11. Exit\n";
}

void readImageFile(Image& img)
{
    while (1)
    {
        string filename;
        cout << "Enter image filename (default ppm files): ";
        cin >> filename;
        if (img.readImage(filename))
        {
            cout << filename << " successfully opened!\n";
            break;
        }
    }
}

void showImageInfo(const Image& img)
{
    cout << "\nIMAGE INFO\n";
    cout << "==========\n";
    cout << "Magic Number: " << img.getMagicNumber() << '\n';
    cout << "Dimension (width x height): " 
         << img.getWidth() << " x " << img.getHeight() << '\n';
    cout << "Maximum Color: " << img.getMaxColor() << '\n';
}

string getFilename()
{
    string filename;
    while (1)
    {
        cout << "Enter filename with no extension: ";
        getline(cin, filename);
        if (filename.length() > 0)
        {
            return filename;
        }
        cout << "Invalid! ";
    }
}