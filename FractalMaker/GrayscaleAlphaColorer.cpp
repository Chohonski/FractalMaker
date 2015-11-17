#include "GrayscaleAlphaColorer.h"

GrayAlphaColorer::GrayAlphaColorer() {}

RGBApixel GrayAlphaColorer::colorPoint(int k){
	RGBApixel newPix;
	if (k != 0) {
		k *= 100;
	}
	newPix.Red = k;
	newPix.Green = k;
	newPix.Blue = k;
	newPix.Alpha = k;
	return newPix;
}