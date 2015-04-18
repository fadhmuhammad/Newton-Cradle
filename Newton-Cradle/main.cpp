#include "Ball.h"
#include <fstream>

#define rad * 3.14 / 180
using namespace std;
int main(int argc, char **argv)
{
	Ball ballOne(22.0 rad);
	ballOne.swing();
	
	return 0;
}
