#include "BurningShip.h"
#include <cmath>

BurningShip::BurningShip() {}

int BurningShip::testPoint(double x, double y) {
	double ta = 0.0, a = 0.0, b = 0.0;
	int i = 0;

	while(i < 255 && abs(a) < 2 && abs(b) < 2) {
		a = abs(a);
		b = abs(b);
		ta = (pow(a, 2.0) - pow(b, 2.0) + x);
		b = (2 * a * b + y);
		a = ta;
		i++;
	}
	return i;
}