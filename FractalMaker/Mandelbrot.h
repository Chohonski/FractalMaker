#ifndef MANDELBROT_H
#define MANDELBROT_H
#include "Fractal.h"

class Mandelbrot:public Fractal {
public:
	Mandelbrot();

	int testPoint(double x, double y);
};

#endif