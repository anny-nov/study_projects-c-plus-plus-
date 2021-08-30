#include <iostream>
using namespace std;

int main()
{
	double x, y;
	cout << "Put dot's coordinates: " << endl;
	cin >> x;
	cin >> y;
	if (x * x + y * y < 9 && y> 0)  cout << "In the figure" << endl;      // "внутри" 
	else
	{
		if (x * x + y * y > 9 || y < 0) cout << "Out the figure" << endl;// "снаружи" 
		else cout << "On the border" << endl;// "на границе"
	}
	return 0;
	system("pause");
}