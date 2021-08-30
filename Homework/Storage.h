#pragma once
#include<iostream>
#include "Owner.h"
using namespace std;
class Storage: public Owner
{
private:
	int id;
	double balance;
public:
	Storage(string name, string sername, string fathername, int day, int month, int year, int id,double balance) : Owner(name,sername,fathername,day,month,year)
	{
		this->id = id;
		this->balance = balance;
	}
	Storage(string name, string sername, string fathername, int day, int month, int year, int id) : Owner(name, sername, fathername, day, month, year)
	{
		this->id = id;
		this->balance = 0;
	}
	virtual void getinfo()
	{
		Owner::getinfo();
		cout << "Id: " << id;
		cout << "Balance: " << balance;
		cout << endl;
	}
	virtual void TakeMoney(double sum)
	{
		if (sum >= balance)
			cout << "Error: Недостаточно средств" << endl;
		else
		{
			balance = balance - sum;
			cout << "Вы вывели " << sum << " рублей. Текущий баланс: " << balance;
		}
	}
	void CheckBalance()
	{
		cout<<"Текущий баланс: " << balance<<endl;
	}
	void PutMoney(double sum)
	{
		balance = balance + sum;
	}
};
