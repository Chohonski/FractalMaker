#ifndef REDCOLORER_H
#define REDCOLORER_H
#include "colorer.h"
class RedColorer : public Colorer{
public:
	RedColorer();
	RGBApixel colorPoint(int k);
};
#endif