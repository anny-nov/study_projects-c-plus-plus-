#include<iostream>
#include<cmath>
using namespace std;

double side(double ax, double ay, double bx, double by)
{
	double s = sqrt((ax - bx)*(ax - bx) + (ay - by)*(ay - by));
	return s;
}
double square(double p, double a, double b, double c)
{
	double sq = sqrt(p * (p - a) * (p - b) * (p - c));
	return sq;
}

int main()
{
	double x[5], y[5], s[3],sq = 0,p;
	int i;
	cout << "Please, put coordinates from the lowest left dot clockwise." << endl;
	for (i = 0; i < 5; i++)
	{
		cout << "Put x: ";
		cin >> x[i];
		cout << "Put y: ";
		cin >> y[i];
	}
	//First square
	s[0] = side(x[0], y[0], x[1], y[1]);
	s[1] = side(x[1], y[1], x[4], y[4]);
	s[2] = side(x[4], y[4], x[0], y[0]);
	p = (s[0] + s[1] + s[2])/2;
	sq += square(p, s[0], s[1], s[2]);

	//Second square
	s[0] = side(x[1], y[1], x[3], y[3]);
	s[1] = side(x[3], y[3], x[4], y[4]);
	s[2] = side(x[4], y[4], x[1], y[1]);
	p = (s[0] + s[1] + s[2]) / 2;
	sq += square(p, s[0], s[1], s[2]);

	//Third square
	s[0] = side(x[1], y[1], x[2], y[2]);
	s[1] = side(x[3], y[3], x[2], y[2]);
	s[2] = side(x[3], y[3], x[1], y[1]);
	p = (s[0] + s[1] + s[2]) / 2;
	sq += square(p, s[0], s[1], s[2]);
	cout << "The square of figure is " << sq << endl;
	return 0;

}