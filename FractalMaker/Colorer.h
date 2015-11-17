#ifndef COLORER_H
#define COLORER_H
#include "EasyBMP.h"

class Colorer{
public:
	virtual RGBApixel colorPoint(int k)=0;
};
#endif