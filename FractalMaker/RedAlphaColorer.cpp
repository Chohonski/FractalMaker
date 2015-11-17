#include "RedAlphaColorer.h"

RedAlphaColorer::RedAlphaColorer() {}

RGBApixel RedAlphaColorer::colorPoint(int k){
	RGBApixel newPix;
	if (k != 0) {
		k *= 100;
	}
	newPix.Red = k;
	newPix.Green = k/5;
	newPix.Blue = k/5;
	newPix.Alpha = k;
	return newPix;
}