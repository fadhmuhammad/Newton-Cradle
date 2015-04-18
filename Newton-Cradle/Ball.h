#ifndef BALL_H
#define BALL_H

#include <iostream>
#include <fstream>
#include "Functions.h" // Base class: Functions

namespace std
{

class Ball : public Functions
{
	public:
	Ball();
	Ball(double, int);
	void swing(double, double);
	void collide();
	bool isCollide(double);
	double getMass();
	double getVel();
	double getPosX();
	double getPosY();
	~Ball();
private:
	double v;
	double w;
	double m;
	double L;
	double r;
	double T;
	double x0;
	double amp;
	double pos;
	double posX;
	double posY;
	int xGrid;
	ofstream fout;
};

}

#endif // BALL_H
