#include "image.h"

Image::Image()
{
    srand(time(0));
    clear();
}

Image::Image(string filename)
{
    srand(time(0));
    readImage(filename);
}

string Image::getMagicNumber() const
{
    // Code here
    return ""; // Fix return statement
}

int Image::getWidth() const
{
    // Code here
    return 0; // Fix return statement
}

int Image::getHeight() const
{
    // Code here
    return 0; // Fix return statement
}

int Image::getMaxColor() const
{
    // Code here
    return 0; // Fix return statement
}

bool Image::readImage(string filename)
{
    // Code here
    return true; // Fix return statement
}

void Image::readHeader(ifstream& file)
{
    // Code here
}

void Image::readBody(ifstream& file)
{
    // Code here
}

bool Image::writeImage(string filename)
{
    // Code here
    return true; // Fix return statement
}

void Image::writePpmHeader(ofstream& file)
{
    // Code here
}

void Image::writePpmBody(ofstream& file)
{
    // Code here
}

bool Image::writeGrayScale(string filename)
{
    // Code here
    return true; // Fix return statement
}

void Image::writePgmHeader(ofstream& file)
{
    // Code here
}

void Image::writePgmBody(ofstream& file)
{
    // Code here
}

short Image::computeNegativeValue(short value)
{
    // Code here
    return 0; // Fix return statement
}

short Image::computeHighContrastValue(short value)
{
    // Code here
    return 0; // Fix return statement
}

short Image::computeRandomNoiseValue(short value)
{
    // Code here
    return 0; // Fix return statement
}

short Image::computeGrayScaleValue(RgbPixel pixel)
{
    // Code here
    return 0; // Fix return statement
}

void Image::applyVerticalFlip()
{
    // Code here
    m_modifications.push_back(VERT_FLIP);
}

void Image::applyHorizontalFlip()
{
    // Code here
    m_modifications.push_back(HORZ_FLIP);
}

void Image::applyNegative()
{
    // Code here
    m_modifications.push_back(NEGATE);
}

void Image::applyHighContrast()
{
    // Code here
    m_modifications.push_back(HIGH_CONTRAST);
}

void Image::applyRandomNoise()
{
    // Code here
    m_modifications.push_back(RAND_NOISE);
}

void Image::removeRed()
{
    // Code here
    m_modifications.push_back(RM_RED);
}

void Image::removeGreen()
{
    // Code here
    m_modifications.push_back(RM_GREEN);
}

void Image::removeBlue()
{
    // Code here
    m_modifications.push_back(RM_BLUE);
}

void Image::clear()
{
    // Code here
}

void Image::printModifications()
{
    cout << "\nSelected Modifications\n";
    cout << "=======================\n";
    // Code here
}