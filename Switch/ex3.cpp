#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	char op;
	cout << "Сделай свой выбор, собери авто мечты: ";
	cin >> op;
	switch (op)
	{
	case 'V':
		cout << "\nКондиционер хочу";
	case'S':
		cout << "\nРадио играть должно";
	default:
		cout << "\nКолеса круглые";
		cout << "\nМощный двигатель\n";
	}
	return 0;
}