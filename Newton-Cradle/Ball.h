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
	Ball(double);
	void swing();
	void collide();
	double getMass();
	double getVel();
	double getPos();
	void print(ofstream&);
	~Ball();
private:
	double v;
	double w;
	double m;
	double L;
	double r;
	double T;
	double amp;
	double pos;
	double posX;
	double posY;
};

}

#endif // BALL_H
