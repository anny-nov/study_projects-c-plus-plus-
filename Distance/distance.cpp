#include<iostream>
#include<windows.h>
using namespace std;
struct Distance
{
	int feet;
	double inches;
	void ShowDist()
	{
		cout << feet << "\'-" << inches << "\"\n";
	}
};
Distance AddDist(const Distance &d1, const Distance &d2)
{
	Distance d;
	d.feet = d1.feet + d2.feet;
	d.inches = d1.inches + d2.inches;
	if (d.inches >= 12.0)
	{
		d.inches -= 12.0;
		d.feet++;
	}
	return d;
}
Distance InputDist()
{
	Distance d;
	cout << "������� ����� �����: ";
	cin >> d.feet;
	cout << "\n������� ����� ������: ";
	cin >> d.inches;
	return d;
}
//void ShowDist(const Distance &d)
//void ShowDist(Distance d)
//{
//	cout << d.feet << "\'-" << d.inches << "\"\n";
//}
int main()
{
	setlocale(LC_ALL, "Russian");
	Distance d1 = InputDist();
	Distance d2 = { 1,6.25 };
	Distance d3 = AddDist(d1, d2);
	//ShowDist(d1);
	//ShowDist(d2);
	//ShowDist(d3);
	d1.ShowDist();
	d2.ShowDist();
	d3.ShowDist();
	int n;
	cout << "������� ��������� ����� � �������? ";
	cin >> n;
	Distance* masDist = new Distance[n];
	for (int i = 0; i < n; i++)
	{
		masDist[i] = InputDist();
	}
	for (int i = 0; i < n; i++)
	{
		masDist[i].ShowDist();
	}
	Distance sum = {0,0};
	for (int i = 0; i < n; i++)
	{
		sum = AddDist(sum, masDist[i]);
	}
	sum.ShowDist();
	delete[] masDist;
	return 0;
}