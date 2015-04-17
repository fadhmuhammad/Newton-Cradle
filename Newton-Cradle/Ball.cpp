#include "Ball.h"
#include "Coordinate.h"

namespace std
{

Ball::Ball() : Coordinate()
{
	w = 0.0;
	v = 0.0;
	L = 0.0;
	m = 0.0;
	r = 0.0;
	amp = 0.0;
	pos = 0.0;
	posX = 0.0;
	posY = 0.0;
	fout.open("data.txt");
	fout << "#x\ty" << endl;
	
}

void Ball::swing : UpdateGrid(){
	periode(T, L);
	double t = 0.0;
	while (t < T){
		velocity(w, v, L);
		posisi(pos, amp, w, t);
		posX = L*cos(pos);
		posY = L*sin(sin);
	}
}
void Ball::print(){
	
}
Ball::~Ball()
{
}


}

