#include "Ball.h"
#include "Functions.h"
#include <fstream>

#define rad * 3.14 / 180
using namespace std;
int main(int argc, char **argv)
{
	int length = 5.0;
	double T = Functions::periode(length);
	Ball ballOne(22.0 rad);
	
	ballOne.swing();
	
	/*while t < T
	 * ballone.swing
	 * balltwo.swing
	 * t+=0.1
	 * /
	
	return 0;
}
