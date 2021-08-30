#include<iostream>
#include "Owner.h"
#include "Storage.h"
#include "Card.h"
using namespace std;

Card::Card(string name, string sername, string fathername, int day, int month, int year, int id, double balance, int pin) : Storage(name, sername, fathername, day, month, year, id, balance)
{
	this->pin = pin;
}
Card::Card(string name, string sername, string fathername, int day, int month, int year, int id, int pin) : Storage(name, sername, fathername, day, month, year, id)
{
	this->pin = pin;
}
void Card::getinfo()
{
	int p;
	cout << "¬ведите пароль от карты: ";
	cin >> p;
	if (p == pin)
	{
		Storage::getinfo();
	}
	else
	{
		cout << "ќтказано в доступе!" << endl;
	}
}
void Card::TakeMoney(double sum)
{
	int p;
	cout << "¬ведите пароль от карты: ";
	cin >> p;
	if (p == pin)
	{
		Storage::TakeMoney(sum);
	}
	else
	{
		cout << "ќтказано в доступе!" << endl;
	}
}