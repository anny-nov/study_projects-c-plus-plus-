#pragma once
#include"dot.h"

class Triangle
{
private:
	Dot* A;
	Dot* B;
	Dot* C;
public:
	Triangle(Dot*, Dot*, Dot*);
	void len_side();
	void set_dots(Dot*, Dot*, Dot*);
	double perimeter();
	double Square();
};