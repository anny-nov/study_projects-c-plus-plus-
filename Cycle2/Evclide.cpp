#include <iostream>
using namespace std;
int main()
{
	int a, b, temp;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	temp = a;
	while (temp != b)
	{
		a = temp;
		if (a < b)
		{
			temp = a;
			a = b;
			b = temp;
		}
		temp = a - b;
		a = b;

	}
	cout << "NOD = " << b << endl;
	
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	temp = a;
	do
	{
		a = temp;
		if (a < b)
		{
			temp = a;
			a = b;
			b = temp;
		}
		temp = a - b;
		a = b;
	} while (temp != b);
	cout << "NOD = " << b << endl;
	system("pause");
	return 0;
}

