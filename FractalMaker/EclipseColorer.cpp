#include "EclipseColorer.h"

EclipseColorer::EclipseColorer() {}

RGBApixel EclipseColorer::colorPoint(int k){
	RGBApixel newPix;
	//k *= 10;
	if(k <= 16) {
		k = 0;
	} else {
		k = 255;
	}
	newPix.Red = k;
	newPix.Green = k;
	newPix.Blue = k;
	//newPix.Alpha = k;
	return newPix;
}