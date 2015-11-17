#include "InverseColorer.h"

InverseColorer::InverseColorer() {}

RGBApixel InverseColorer::colorPoint(int k){
	RGBApixel newPix;
	if(k != 0) {
		if(k > 10) {
			k *= 10;
		} else {	
			k = 100 - k;
		}
	}
	k = 255 - k;
	newPix.Red = k;
	newPix.Green = k;
	newPix.Blue = k;
	return newPix;
}