#include <math.h>
#include <iostream>
#include <fstream>
#include "Ball.h"

namespace std
{

Ball::Ball(double amp_, int i)
{
	L = 5.0;
	m = 1.0;
	r = 0.0;
	amp = amp_;
	pos = 0.0;
	posX = 0.0;
	posY = 0.0;
	x0 = (i-1)*0.3;
	w = velocityAng(L);
	v = velocityLin(w, L);
	T = periode(L);
	
	char ifn[] = "databola-1.txt";
	ifn[9] = '0' + i;
	fout.open(ifn);
	fout << "#x\ty" << endl;
}

void Ball::swing(double t)
{
	if (!isCollide()){
		pos = posisi(amp, w, t);
		posX = L*sin(pos);
		posY = L*cos(pos);
	} else if (isCollide()){
		
	}
	cout << posX+x0 << "\t" << -posY << endl;
	fout << posX+x0 << "\t" << -posY << endl;
}

bool Ball::isCollide(){
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
double Ball::getPos()
{
	return posX;
}
Ball::~Ball()
{
}


}

