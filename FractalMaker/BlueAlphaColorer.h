#ifndef BLUEALPHACOLORER_H
#define BLUEALPHACOLORER_H
#include "colorer.h"
class BlueAlphaColorer : public Colorer{
public:
	BlueAlphaColorer();
	RGBApixel colorPoint(int k);
};
#endif