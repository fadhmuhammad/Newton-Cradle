#ifndef FUNCTIONS_H
#define FUNCTIONS_H

class Functions
{
public:
	Functions();
	double posisi(double, double, double);
	double velocityAng(double);
	double velocityLin(double, double);
	double periode(double);
	void conservation(double, double, double, double);
};

#endif // FUNCTIONS_H
