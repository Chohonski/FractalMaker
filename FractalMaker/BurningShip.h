#ifndef BURNING_SHIP_H
#define BURNING_SHIP_H
#include "Fractal.h"

class BurningShip:public Fractal{
public:
	BurningShip();

	//BurningShip() : Fractal() {}

	int testPoint(double x, double y);
};

#endif 