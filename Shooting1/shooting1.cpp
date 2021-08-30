#include<iostream>
using namespace std;
int main()
{
	int x, y;
	double res, max, s = 0;
	int n;
	cout << "How many times have you shooted?" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Put x: ";
		cin >> x;
		cout << "Put y: ";
		cin >> y;
		if (x * x + y * y <= 2) {
			s += 10;
		}
		else
		{
			if (x * x + y * y > 1 && x * x + y * y <= 4)
				s += 5; 
			else
			{
				if (x * x + y * y > 4 && x * x + y * y <= 9) {
					s += 1; 
				}
				else {
					s += 0; 
				}
			}
		}


	}
	max = n * 10;
	res = s / max * 100;
	if (res >= 80) cout << "You are professional shooter!" << endl;
	if (res < 80 && res >= 50) cout << "Not bad, you have had some expirience already, aren't you?" << endl;
	if (res < 50) cout << "Oh, maybe you should try again..." << endl;
	return 0;
}