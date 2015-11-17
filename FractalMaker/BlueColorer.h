#ifndef BLUECOLORER_H
#define BLUECOLORER_H
#include "colorer.h"
class BlueColorer : public Colorer{
public:
	BlueColorer();
	RGBApixel colorPoint(int k);
};
#endif