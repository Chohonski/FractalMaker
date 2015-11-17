#include "Eye.h"
#include <cmath>

Eye::Eye() {}

int Eye::testPoint(double x, double y) {
	double ta = 0.0, a = 0.0, b = 0.0, temp = 0.0;
	int i = 0;
	const double PI = 3.14159265;

	temp = y;
	y = abs(x);
	x = abs(temp);
	while(i <= 1023 && abs(a) < 2 && abs(b) < 2) {
		ta = (a - (x * (-i))) / (PI*(10*PI)); // from turns to radians
		b = y * y + b + ta;
		a = ta;
		i ++;
	}
	return i;
}
