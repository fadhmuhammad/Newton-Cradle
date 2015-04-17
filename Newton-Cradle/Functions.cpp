#include <math.h>
#include "Functions.h"
#define g 9.8
#define PI 3.14

double Functions::posisi(double pos, double amp, double w, double t){
	pos = amp * sin(w*t);
}

double Functions::velocity(double w, double w, double L){
	w = sqrt(g/L);
	v = w*L;
}

double Functions::conservation(double m, double v){
	double p, Ek;
}

double Functions::periode(){
	
}
