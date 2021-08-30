#include<iostream>
#include<cmath>
#include<string>
using namespace std;
class Triangle
{
public:
	class Errors
	{
	public:
		string sname;
		double sidev;
		Errors(string fn, double s)
		{
			sname = fn;
			sidev = s;
		}
	};
	void set_sides(double s1, double s2, double s3)
	{
		if (s1 > s2 + s3)
			throw Errors("a", s1);
		if(s2 > s1 + s3)
			throw Errors("b", s2);
		if(s3 > s2 + s1)
			throw Errors("c", s3);
		a = s1;
		b = s2;
		c = s3;
		
	}
	void Square()
	{
		double p = (a + b + c) / 2;
		sq = sqrt(p * (p - a) * (p - b) * (p - c));
	}
	double get_square()
	{
		return sq;
	}
private:
	double a;
	double b;
	double c;
	double sq;
};
int main()
{
	Triangle tr1;
	double a, b, c;
	cout << "Put the triangle's sides: ";
	cin >> a >> b >> c;
	try
	{
		tr1.set_sides(a, b, c);
		tr1.Square();
		cout << "The square of the triangle is" << tr1.get_square() << endl;
	}
	catch (Triangle::Errors ex)
	{
		cout << "Invalid input. The side " << ex.sname << " with value " << ex.sidev << " is too big." << endl;
	}
	return 0;
}