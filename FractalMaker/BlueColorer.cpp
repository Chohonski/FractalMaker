#include "BlueColorer.h"

BlueColorer::BlueColorer() {}

RGBApixel BlueColorer::colorPoint(int k){
	RGBApixel newPix;
	if(k != 0) {
		if(k > 10) {
			k *= 10;
		} else {	
			k = 100 - k;
		}
	}
	newPix.Red = k/5;
	newPix.Green = k/5;
	newPix.Blue = k;
	return newPix;
}