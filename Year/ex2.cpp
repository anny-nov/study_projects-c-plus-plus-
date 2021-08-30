#include<iostream>
using namespace std;
int main()
{
	int y;
	cout << "Put the number of year: ";
	cin >> y;
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) cout << "\nYES" << endl;
	else cout << "\nNO" << endl;
	system("pause");
	return 0;
}