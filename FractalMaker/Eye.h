#ifndef EYE_H
#define EYE_H
#include "Fractal.h"

class Eye:public Fractal {
public:
	Eye();

	int testPoint(double x, double y);
};

#endif