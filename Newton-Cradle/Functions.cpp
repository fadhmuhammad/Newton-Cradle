#include <math.h>
#include "Functions.h"
#define g 9.8
#define PI 3.14

double Functions::posisi(double amp, double w, double t){
	return amp*sin(w*t);
}

double Functions::velocityAng(double L){
	return sqrt(g/L);
}

double Functions::velocityLin(double w, double L){
	return w*L;
}

void Functions::conservation(double m1, double m2, double v1, double v2){
	//double p, Ek, massratio;
	double v1_, v2_;
	// m1*v1 + m2*v2 = m1*v1_ + m2*v2_;
	// 0.5*m1*v1*v1 + 0.5*m2*v2*v2 = 0.5*m1*v1_*v1_ + 0.5*m2*v2_*v2_;
	if (m1 == m2){
		//v1 = v1_ + v2_;
		//v1*v1 = (v1_*v1) + (v2_*v2_);
		//v1_*v1_ + 2*v1_*v2_ + v2_*v2_ = v1_*v1_ + v2_*v2_;
		//2*v1_*v2_;
		if (v1 == 0)
			v1_ = v2;
		else if (v2 == 0)
			v2_ = v1;
	}
}

double Functions::periode(double L){
	return 2*PI*sqrt(L/g)	;
}
