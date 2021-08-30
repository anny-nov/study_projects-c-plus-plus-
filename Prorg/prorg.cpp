#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;

void privet(string name);
void privet(string name, int k)
{
	cout << "Hello again, " << name << endl;
	cout << "You put " << k << endl;
}
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	string name;
	int k;
	cout << "Enter your name: ";
	cin >> name;
	cout << "Put your favourite number: ";
	cin >> k;
	privet(name);
	privet(name, k);
	return 0;
}
void privet(string name)
{
	cout << "Hello, " << name << endl;
}