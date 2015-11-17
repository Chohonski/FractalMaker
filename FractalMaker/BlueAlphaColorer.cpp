#include "BlueAlphaColorer.h"

BlueAlphaColorer::BlueAlphaColorer() {}

RGBApixel BlueAlphaColorer::colorPoint(int k){
	RGBApixel newPix;
	if (k != 0) {
		k *= 100;
	}
	newPix.Red = k/5;
	newPix.Green = k/5;
	newPix.Blue = k;
	newPix.Alpha = k;
	return newPix;
}