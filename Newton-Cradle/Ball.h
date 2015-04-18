#ifndef BALL_H
#define BALL_H

#include <fstream>
#include "Functions.h" // Base class: Functions

namespace std
{

class Ball : public Functions
{
public:
	Ball();
	void swing();
	void collide();
	double getMass();
	double getVel();
	double getPos();
	void print();
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
	ofstream fout;
};

}

#endif // BALL_H
