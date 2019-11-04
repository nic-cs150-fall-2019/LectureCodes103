#ifndef IMAGE_H
#define IMAGE_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

enum ImageModificationType {
    VERT_FLIP = 0, HORZ_FLIP, NEGATE,
    HIGH_CONTRAST, RAND_NOISE, RM_RED,
    RM_GREEN, RM_BLUE
};

struct RgbPixel
{
    short rr;
    short gg;
    short bb;
};

const string modificationName[] = {
    "Vertical Flip", "Horizontal Flip", "Negative Color", "High Contrast",
    "Random Noise", "Remove Red", "Remove Green", "Remove Blue"
};

class Image
{
public:
    Image();
    Image(string filename);

    string getMagicNumber() const;
    int getWidth() const;
    int getHeight() const;
    int getMaxColor() const;

    bool readImage(string filename);
    bool writeImage(string filename="");
    bool writeGrayScale(string filename="");

    void applyVerticalFlip();
    void applyHorizontalFlip();
    void applyNegative();
    void applyHighContrast();
    void applyRandomNoise();
    
    void removeRed();
    void removeGreen();
    void removeBlue();
    void printModifications();

private:
    void clear();
    void readHeader(ifstream& file);
    void readBody(ifstream& file);
    void writePpmHeader(ofstream& file);
    void writePpmBody(ofstream& file);
    void writePgmHeader(ofstream& file);
    void writePgmBody(ofstream& file);

    short computeNegativeValue(short value);
    short computeHighContrastValue(short value);
    short computeRandomNoiseValue(short value);
    short computeGrayScaleValue(RgbPixel pixel);

    vector<vector<RgbPixel>> m_image;
    vector<int> m_modifications;
    string m_magicNumber;
    int m_width;
    int m_height;
    int m_maxColor;
};

#endif