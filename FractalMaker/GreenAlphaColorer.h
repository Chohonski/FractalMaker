#ifndef GREENALPHACOLORER_H
#define GREENALPHACOLORER_H
#include "colorer.h"

class GreenAlphaColorer : public Colorer{
public:
	GreenAlphaColorer();
	RGBApixel colorPoint(int k);
};
#endif