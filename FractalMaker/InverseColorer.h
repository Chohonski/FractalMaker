#ifndef INVERSECOLORER_H
#define INVERSECOLORER_H
#include "colorer.h"
class InverseColorer : public Colorer{
public:
	InverseColorer();
	RGBApixel colorPoint(int k);
};
#endif