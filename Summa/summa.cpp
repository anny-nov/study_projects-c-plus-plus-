#include<iostream>
using namespace std;

int main()
{
	int m, k;
	cout << "k = ";
	cin >> k;
	cout << "m = ";
	cin >> m;
	int s = 0;
	for (int i = 1; i <= 100; i++) 
	{
		if ((i > k) && (i < m))
			continue;
		cout << i << endl;
		s += i;
	}
	cout << "Sum = " << s << endl;
}