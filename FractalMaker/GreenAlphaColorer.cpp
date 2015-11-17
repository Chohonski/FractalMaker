#include "GreenAlphaColorer.h"

GreenAlphaColorer::GreenAlphaColorer() {}

RGBApixel GreenAlphaColorer::colorPoint(int k){
	RGBApixel newPix;
	if (k != 0) {
		k *= 100;
	}
	newPix.Red = k/5;
	newPix.Green = k;
	newPix.Blue = k/5;
	newPix.Alpha = k;
	return newPix;
}