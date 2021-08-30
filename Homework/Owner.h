#pragma once
#include<iostream>
using namespace std;
class Owner
{
private:
	string name;
	string sername;
	string fathername;
	int year;
	int month;
	int day;
	int agey;
public:
	Owner(string name, string sername, string fathername, int day, int month, int year);
	virtual void getinfo();
	int getage();
	void age();
};
