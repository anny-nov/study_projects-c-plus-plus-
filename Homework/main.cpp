#include<iostream>
#include "Owner.h"
#include "Storage.h"
#include "Account.h"
#include "Card.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int day, month, year;
	cout << "Введите дату вашего рождения в формате ДД ММ ГГГГ: ";
	cin >> day >> month >> year;
	Card* A1 = new Card("Новожилова", "Анна", "Владимировна", day, month, year, 285450, 1234);
	A1->getinfo();
	A1->CheckBalance();
	A1->TakeMoney(135.0);
	A1->PutMoney(1000.0);
	A1->TakeMoney(135.0);
	cout << "Введите дату вашего рождения в формате ДД ММ ГГГГ: ";
	cin >> day >> month >> year;
	Account* A2 = new Account("Новожилова", "Елена", "Владимировна", day, month, year, 123456, 150000.0);
	A2->getinfo();
	A2->CheckBalance();
	A2->TakeMoney(10000.0);
	A2->PutMoney(1.0);
	A2->CheckBalance();
	delete A1;
	delete A2;
	return 0;
}