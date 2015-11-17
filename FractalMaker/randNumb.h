#ifndef RANDNUMB_H
#define RANDNUMB_H
#include "Fractal.h"

class RandNumb:public Fractal {
public:
	RandNumb();
	int testPoint(double x, double y);
	double xRand;
	double yRand;
};

#endif