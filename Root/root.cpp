#include<iostream>
#include <cmath>
using namespace std;

int root(double a, double b, double c, double &x1, double &x2)
{
	int r;
	double D = b * b - 4 * a * c;
	if (D < 0) r = -1;
	else
	{
		if (D == 0) { x1 = x2 = -b / 2 * a; r = 0; }
		else
		{
			x1 = (-b + sqrt(D)) / 2 * a;
			x2 = (-b - sqrt(D)) / 2 * a;
			r = 1;
		}
	}
	return r;
}

int main()
{
	double x1 = 0, x2 = 0, a, b, c;
	cout << "Put a, b and c: " << endl;
	cin >> a >> b >> c;
	int r = root(a, b, c, x1, x2);
	cout << "Result is "<<r<<endl;
	if (r == -1) cout << "There are no roots." << endl;
	if (x1 == x2) cout << "The root is " << x1;
	if (r == 1) cout << "First root is " << x1 << ".Second root is " << x2 << endl;
	return 0;
}