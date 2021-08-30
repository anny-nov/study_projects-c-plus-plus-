#include<iostream>
#include<cmath>
using namespace std;

double square(double a)
{
	double p = a * 3 / 2;
	double s = sqrt(p * (p - a) * (p - a) * (p - a));
	return s;
}
double square(double a, double b, double c)
{
	double p = (a+b+c)/ 2;
	double s = sqrt(p * (p - a) * (p - b) * (p - c));
	return s;
}

int main() //Вычисление площади треугольника
{
	double p, a, s, s2, b, c;
	cout << "Put the perimetr of the triangle: " << endl;
	cin >> a >> b >> c;
	if (a == b == c)
	{
		s2 = square(a);
		cout << "\nSide:\t Square: \t\n" << endl;
		cout << a << "\t" << s << "\t" << endl;
	}
	else
	{
		s = square (a,b,c) ;
		cout << "\nSide:\t Square: \t\n" << endl;
		cout << a << "\t" << s << "\t" << endl;
	}
	system("pause");
}