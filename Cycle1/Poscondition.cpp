#include<iostream>
using namespace std;
int main()
{
	double x, x1, x2, y;
	cout << "x1 = ";
	cin >> x1;
	cout << "x2 = ";
	cin >> x2;
	cout << "\tx\tsin(x)\n";
	x = x1;
	do
	{
		y = sin(x);
		cout << "\t" << x << "\t" << y << endl;
		x = x + 0.01;
	} 
	while (x <= x2);

	cout << "x1 = ";
	cin >> x1;
	cout << "x2 = ";
	cin >> x2;
	x = x1;
	while (x <= x2)
	{
		y = sin(x);
		cout << "\t" << x << "\t" << y << endl;
		x = x + 0.01;
	}
	system("pause");
	return 0;
}