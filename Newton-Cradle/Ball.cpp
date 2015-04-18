#include <math.h>
#include <iostream>
#include <fstream>
#include "Ball.h"

namespace std
{

Ball::Ball(double amp_)
{
	L = 5.0;
	m = 0.0;
	r = 0.0;
	amp = amp_;
	pos = 0.0;
	posX = 0.0;
	posY = 0.0;
	ofstream fout;
	w = velocityAng(L);
	v = velocityLin(w, L);
	T = periode(L);
	
}

void Ball::swing()
{
	ofstream fout;
	fout.open("data.txt");
	fout << "#x\ty" << endl;
	double t = 0.0;
	while (t < T){
		pos = posisi(amp, w, t);
		posX = L*cos(pos);
		posY = L*sin(pos);
		cout << posX << "\t" << posY << endl;
		fout << posX << "\t" << posY << endl;
		t += 0.1;
	}
}
void Ball::print(ofstream &fout){
	fout << posX << "\t" << posY << endl;
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
	return pos;
}
Ball::~Ball()
{
}


}

