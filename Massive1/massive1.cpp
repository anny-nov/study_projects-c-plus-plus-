#include <iostream>
using namespace std;

int main()
{
	const int n = 10;
	int mas[n];
	int i;
	for (i = 0; i < n; i++)
	{
		cout << "mas[" << i << "]= ";
		cin >> mas[i];
	}
	int s = 0;
	for (i = 0; i < n; i++)
	{
		s += mas[i];
	}
	double srznach = s / i;
	cout << "Summ = " << s << endl;
	cout << "Average = " << srznach << endl;
	int so = 0;
	for (i = 0; i < n; i++)
	{
		if (mas[i] < 0) so += mas[i];
	}
	cout << "Summ of negative numbers = " << so;
	int sp = 0;
	for (i = 0; i < n; i++)
	{
		if (mas[i] > 0) sp += mas[i];
	}
	cout << "Summ of positive numbers = " << sp;
	int snch = 0;
	for (i = 0; i < n; i++)
	{
		if (i % 2 == 1) snch += mas[i];
	}
	cout << "Summ of numbers with odd order = " << snch << endl;
	int sch = 0;
	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0) sch += mas[i];
	}
	cout << "Summ of numbers with even order = " << sch << endl;
	int maxi = -1000000, mini = 10000000, maxim, minim;
	for (i = 0; i < n; i++)
	{
		if (mas[i] > maxi) { maxi = mas[i]; maxim = i; }
		if (mas[i] < mini) { mini = mas[i]; minim = i; }
	}
	cout << "The index of maximum element is " << maxim << endl;
	cout << "The index of minimum element is " << minim << endl;
	int pr = 1;
	if (minim > maxim)
	{
		int d = maxim + 1;
		for (i = d; i < minim; i++)
		{
			pr *= mas[i];
		}
	}
	if (minim < maxim)
	{
		int d = minim + 1;
		for (i = d; i < maxim; i++)
		{
			pr *= mas[i];
		}
	}
	if (minim == maxim) pr = 0;
	if (pr == 0) cout << "All elements are similar" << endl;
	else cout << "Pr is" << pr << endl;
	return 0;
}