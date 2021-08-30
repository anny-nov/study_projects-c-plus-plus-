#pragma once
#include<iostream>
#include "Owner.h"
#include "Storage.h"
using namespace std;
class Account : public Storage
{
public:
	Account(string name, string sername, string fathername, int day, int month, int year, int id, double balance);
	Account(string name, string sername, string fathername, int day, int month, int year, int id);
	void getinfo();
	void TakeMoney(double sum);
};