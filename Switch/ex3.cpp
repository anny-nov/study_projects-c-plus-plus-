#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	char op;
	cout << "������ ���� �����, ������ ���� �����: ";
	cin >> op;
	switch (op)
	{
	case 'V':
		cout << "\n����������� ����";
	case'S':
		cout << "\n����� ������ ������";
	default:
		cout << "\n������ �������";
		cout << "\n������ ���������\n";
	}
	return 0;
}