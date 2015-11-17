#include "GreenColorer.h"

GreenColorer::GreenColorer() {}

RGBApixel GreenColorer::colorPoint(int k){
	RGBApixel newPix;
	if(k != 0) {
		if(k > 10) {
			k *= 10;
		} else {	
			k = 100 - k;
		}
	}
	newPix.Red = k/5;
	newPix.Green = k;
	newPix.Blue = k/5;
	return newPix;
}