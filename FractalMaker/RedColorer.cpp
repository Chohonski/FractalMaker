#include "RedColorer.h"

RedColorer::RedColorer() {}

RGBApixel RedColorer::colorPoint(int k){
	RGBApixel newPix;
	if(k != 0) {
		if(k > 10) {
			k *= 10;
		} else {	
			k = 100 - k;
		}
	}
	newPix.Red = k;
	newPix.Green = k/5;
	newPix.Blue = k/5;
	return newPix;
}