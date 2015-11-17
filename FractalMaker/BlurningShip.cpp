#include "BlurningShip.h"
#include <cmath>
#include <cstdlib>

BlurningShip::BlurningShip() {}

int BlurningShip::testPoint(double x, double y) {
	double ta = 0.0, a = 0.0, b = 0.0;
	int i = 0;
	double xRand = rand() % 3 + 1;
	double yRand = rand() % 3 + 1;
	while(i < 255 && abs(a) < 2 && abs(b) < 2) {
		ta = (pow(a, xRand) - pow(b, yRand) + x);
		b = (2 * a * b + y);
		a = ta;
		i++;
	}
	return i;
}