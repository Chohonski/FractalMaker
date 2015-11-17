#ifndef GREENCOLORER_H
#define GREENCOLORER_H
#include "colorer.h"
class GreenColorer : public Colorer{
public:
	GreenColorer();
	RGBApixel colorPoint(int k);
};
#endif