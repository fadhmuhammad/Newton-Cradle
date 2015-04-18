#include "Ball.h"
#include "Functions.h"
#include <fstream>

#define rad * 3.14 / 180
using namespace std;
int main(int argc, char **argv)
{
	Functions fungsi;
	int length = 5.0;
	double T = fungsi.periode(length);
	Ball ballOne(22.0 rad, 1);
	Ball ballTwo(22.0 rad, 2);
	
	double t = 0.0;
	while (t < T){
		ballOne.swing(t);
		ballTwo.swing(t);
		t += 0.1;
	}
	
	/*while t < T
	 * ballone.swing
	 * balltwo.swing
	 * t+=0.1
	 */
	
	return 0;
}
