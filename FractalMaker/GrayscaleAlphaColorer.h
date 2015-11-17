#ifndef GRAYALPHACOLORER_H
#define GRAYALPHACOLORER_H
#include "colorer.h"
class GrayAlphaColorer : public Colorer{
public:
	GrayAlphaColorer();
	RGBApixel colorPoint(int k);
};
#endif