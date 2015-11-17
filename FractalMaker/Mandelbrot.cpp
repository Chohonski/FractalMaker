#include "Mandelbrot.h"
#include <cmath>

Mandelbrot::Mandelbrot() {}

int Mandelbrot::testPoint(double x, double y) {
	double ta = 0.0, a = 0.0, b = 0.0;
	int i = 0;

	while(i <= 255 && abs(a) < 2 && abs(b) < 2) {
		ta = pow(a, 2.0) - pow(b, 2.0) + x;
		b = 2 * a * b + y;
		a = ta;
		i++;
	}
	return i;
}
