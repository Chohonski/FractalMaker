#ifndef BLURNINGSHIP_H
#define BLURNINGSHIP_H
#include "Fractal.h"

class BlurningShip:public Fractal {
public:
	BlurningShip();

	int testPoint(double x, double y);
};

#endif