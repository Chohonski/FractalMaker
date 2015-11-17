#ifndef REDALPHACOLORER_H
#define REDALPHACOLORER_H
#include "colorer.h"
class RedAlphaColorer : public Colorer{
public:
	RedAlphaColorer();
	RGBApixel colorPoint(int k);
};
#endif