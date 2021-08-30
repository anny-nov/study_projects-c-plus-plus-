#include<iostream>
#include "Owner.h"
#include "Storage.h"
#include "Account.h"
using namespace std;
Account::Account(string name, string sername, string fathername, int day, int month, int year, int id, double balance): Storage(name, sername, fathername, day, month, year, id, balance) {}
Account::Account(string name, string sername, string fathername, int day, int month, int year, int id) : Storage(name, sername, fathername, day, month, year, id) {}
void Account::getinfo()
{
	Storage::getinfo();
	int a = getage();
	if (a >= 18) cout << "Доступ к счету неограничен." << endl;
	else cout << "Доступ к счету ограничен." << endl;
}
void Account::TakeMoney(double sum)
{
	int a = getage();
	if (a < 18) cout << "Доступ ограничен. Нельзя снимать деньги." << endl;
	else Storage::TakeMoney(sum);
}