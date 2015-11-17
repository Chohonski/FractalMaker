#ifndef GRAYCOLORER_H
#define GRAYCOLORER_H
#include "colorer.h"
class GrayColorer : public Colorer{
public:
	GrayColorer();
	RGBApixel colorPoint(int k);
};
#endif