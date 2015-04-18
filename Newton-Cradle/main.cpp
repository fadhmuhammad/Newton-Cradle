#include "Ball.h"
#include "Functions.h"
#include <fstream>
#include <math.h>

#define rad * 3.14 / 180
using namespace std;
int main(int argc, char **argv)
{
	Functions fungsi;
	int length = 5.0;
	double T = fungsi.periode(length);
	Ball ballOne(-22.0 rad, 1);
	Ball ballTwo(0.0 rad, 2);
	
	double dx;
	double dy;
	double d;
	
	
	double t = T;
	while (t < T){
		dx = ballOne.getPosX() - ballTwo.getPosX();
		dy = ballOne.getPosY() - ballTwo.getPosY();
		d = sqrt(dx*dx + dy*dy);
		ballOne.swing(t,d);
		ballTwo.swing(t,d);
		t += 0.1;
	}
	
	return 0;
}
