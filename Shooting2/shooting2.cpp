#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	int x, y;
	double res, max, s = 0;
	int n;
	int mx = rand() % 10;
	int my = rand() % 10;
	cout << "How many times have you shooted?" << endl;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cout << "Put x: ";
		cin >> x;
		cout << "Put y: ";
		cin >> y;
		if ((mx - x) * (mx - x) + (my - y) *(my - y) <= 1) {
			s += 10;
		}
		else
		{
			if ((mx - x) * (mx - x) + (my - y) * (my - y) > 1 && (mx - x) * (mx - x) + (my - y) * (my - y) <= 4) {
				s += 5;
			}
			else
			{
				if ((mx - x) * (mx - x) + (my - y) * (my - y) > 4 && (mx - x) * (mx - x) + (my - y) * (my - y) <= 9) {
					s += 1;
				}
				else {
					s += 0;
				}
			}
		}


	}
	max = n * 10;
	cout << max << endl;
	res = s / max * 100;
	cout << res << endl;
	if (res >= 80) cout << "You are professional shooter!" << endl;
	if (res < 80 && res >= 50) cout << "Not bad, you have had some expirience already, aren't you?" << endl;
	if (res < 50) cout << "Oh, maybe you should try again..." << endl;
	return 0;
}