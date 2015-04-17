#ifndef COORDINATE_H
#define COORDINATE_H

class Coordinate
{
public:
	Coordinate();
	void UpdateGrid();
	bool GetGridStatus();
	~Coordinate();
private:
	bool Grid[][];
	int x;
	int y;

};

#endif // COORDINATE_H
