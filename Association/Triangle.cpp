#include<cmath>
#include<iostream>
#include"Triangle.h"
using namespace std;

Triangle::Triangle(Dot*a,Dot*b,Dot*c)
{
	A = a;
	B = b;
	C = c;
}
void Triangle::set_dots(Dot* a, Dot* b, Dot* c)
{
	A = a;
	B = b;
	C = c;
}
void Triangle::len_side()
{
	cout <<"AB: "<<A->Disto(*B) << endl;
	cout << "AC: " << A->Disto(*C) << endl;
	cout << "CB: " << C->Disto(*B) << endl;
}
double Triangle::perimeter()
{
	double p = A->Disto(*B) + A->Disto(*C) + C->Disto(*B);
	return p;
}
double Triangle::Square()
{
	double p = this->perimeter() / 2;
	double sq = sqrt(p * (p - A->Disto(*B)) * (p - A->Disto(*C)) * (p - C->Disto(*B)));
	return sq;
}