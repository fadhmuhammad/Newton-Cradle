#include <math.h>
#include <iostream>
#include <fstream>
#include "Ball.h"

namespace std
{
Ball::Ball(){
	
}
Ball::Ball(double amp_, int i)
{
	L = 5.0;
	m = 1.0;
	r = 0.2;
	amp = amp_;
	pos = 0.0;
	posX = 0.0;
	posY = 0.0;
	x0 = (i-1)*(2*r);
	v = 0.0;
	w = velocityAng(v, L);
	v = velocityLin(w, L);
	T = periode(L);
	
	char ifn[] = "databola-1.txt";
	ifn[9] = '0' + i;
	fout.open(ifn);
	fout << "#x\ty\tr" << endl;
}

void Ball::swing(double t, double d)
{
	if (!isCollide(d)){
		pos = posisi(amp, w, t);
		posX = L*sin(pos);
		posY = L*cos(pos);
	} else if (isCollide(d)){
		
	}
	fout << posX+x0 << "\t" << -posY << "\t" << r << endl;
}

bool Ball::isCollide(double d){
	if (d < 2*r)
		return true;
	else
		return false;
}
void Ball::collide()
{
	
}

double Ball::getMass()
{
	return m;
}
double Ball::getVel()
{
	return v;
}
double Ball::getPosX()
{
	return posX;
}

double Ball::getPosY()
{
	return posY;
}

Ball::~Ball()
{
}


}

