#include <math.h>
#include "Ball.h"

namespace std
{

Ball::Ball(double amp_)
{
	w = 0.0;
	v = 0.0;
	L = 0.0;
	m = 0.0;
	r = 0.0;
	T = 0.0;
	amp = amp_;
	pos = 0.0;
	posX = 0.0;
	posY = 0.0;
	fout.open("data.txt");
	fout << "#x\ty" << endl;
	
}

void Ball::swing()
{
	periode(T, L);
	double t = 0.0;
	while (t < T){
		velocity(w, v, L);
		posisi(pos, amp, w, t);
		posX = L*cos(pos);
		posY = L*sin(pos);
		print();
	}
}
void Ball::print(){
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
	
}
Ball::~Ball()
{
}


}

