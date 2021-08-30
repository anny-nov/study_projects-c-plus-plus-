#pragma once
#include<iostream>
#include "Owner.h"
#include "Storage.h"
using namespace std;
class Card : public Storage
{
private:
	int pin;
public:
	Card(string name, string sername, string fathername, int day, int month, int year, int id, double balance, int pin);
	Card(string name, string sername, string fathername, int day, int month, int year, int id, int pin);
	void getinfo();
	void TakeMoney(double sum);
};