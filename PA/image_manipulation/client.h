#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include "image.h"
using namespace std;

void showMenu();
void readImageFile(Image& img);
void showImageInfo(const Image& img);
string getFilename();

#endif