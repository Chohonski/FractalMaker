#include "EasyBMP.h"

//System Libs
#include <iostream>
#include <cstdlib>
#include <omp.h>
#include <vector>
#include <ctime>

//Fractal Headers
#include "Fractal.h"
#include "Mandelbrot.h"
#include "BurningShip.h"
#include "BlurningShip.h"
#include "randNumb.h"
#include "Eye.h"

//Colorer Headers
#include "colorer.h"
#include "RedAlphaColorer.h"
#include "GreenAlphaColorer.h"
#include "BlueAlphaColorer.h"
#include "GrayscaleAlphaColorer.h"
#include "EclipseColorer.h"
#include "RedColorer.h"
#include "GreenColorer.h"
#include "BlueColorer.h"
#include "GrayscaleColorer.h"
#include "InverseColorer.h"

using namespace std;

static double map(double pixel,	//coord passed in by user
	double istart,	//initial start
	double istop,	//initial stop
	double ostart,	//output start
	double ostop);

int main(int argc, char* argv[]) {
	srand (time(NULL));

	int fracSelect = atoi(argv[1]);
	int colSelect = atoi(argv[2]);
	int x0 = atoi(argv[3]);
	int x1 = atoi(argv[4]);
	int y0 = atoi(argv[5]);
	int y1 = atoi(argv[6]);
	double width = atoi(argv[7]);
	double height = atoi(argv[8]);

	vector<Fractal*> fracSel(5);
	fracSel[0] = new Mandelbrot();
	fracSel[1] = new BurningShip();
	fracSel[2] = new BlurningShip();
	fracSel[3] = new RandNumb();
	fracSel[4] = new Eye();


	vector<Colorer*> colSel(10);
	colSel[0] = new RedAlphaColorer();
	colSel[1] = new GreenAlphaColorer();
	colSel[2] = new BlueAlphaColorer();
	colSel[3] = new GrayAlphaColorer();
	colSel[4] = new RedColorer();
	colSel[5] = new GreenColorer();
	colSel[6] = new BlueColorer();
	colSel[7] = new GrayColorer();
	colSel[8] = new EclipseColorer();
	colSel[9] = new InverseColorer();

	// Declare a new bitmap object
	BMP AnImage;
	// Set size to 640 £ 480
	AnImage.SetSize(width,height);
	// Set its color depth to 8-bits
	AnImage.SetBitDepth(32);

	cout << "File info:" << endl;
	cout << AnImage.TellWidth() << " x " << AnImage.TellHeight()
		<< " at " << AnImage.TellBitDepth() << " bpp" << endl;

#pragma omp parallel
	{
#pragma omp for
		for(int x = 0.0; x < int(width); x+= 1.0){
			for(int y = 0.0; y < int(height); y += 1.0){
				double xcurr = map(x, 0, width, x0, x1); //Change last two inputs to user input
				double ycurr = map(y, 0, height, y0, y1); //Change last two inputs to user input
				int color = fracSel[fracSelect]->testPoint(xcurr, ycurr);
				if(color >= 255) { color = 0; }
				AnImage.SetPixel(x,y,colSel[colSelect]->colorPoint(color));
			}
		}
	}
	AnImage.WriteToFile(argv[10]);

	cout << "File save complete." << endl;

	int c;
	cin >> c;
	return EXIT_SUCCESS;
};

static double map(double pixel,	//coord passed in by user
	double istart,	//initial start
	double istop,	//initial stop
	double ostart,	//output start
	double ostop) {	//output stop
		return ostart + (ostop - ostart) * ((pixel - istart) / (istop - istart));
}