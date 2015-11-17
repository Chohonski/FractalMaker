#ifndef ECLIPSECOLORER_H
#define ECLIPSECOLORER_H
#include "colorer.h"
class EclipseColorer : public Colorer{
public:
	EclipseColorer();
	RGBApixel colorPoint(int k);
};
#endif