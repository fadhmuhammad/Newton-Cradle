#ifndef BALL_H
#define BALL_H

#include "" // Base class: Functions

namespace std
{

class Ball : public Functions
{
public:
	Ball();
	void swing;
	void collide;
	~Ball();
private:
	double v;
	double w;
	double m;
	double L;
	double r;
	double amp;
	double posX;
	double posY;
};

}

#endif // BALL_H
