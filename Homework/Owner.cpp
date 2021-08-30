#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<ctime>
#include "Owner.h"
using namespace std;
bool IsLeapYear(int year)
{
	return ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0));
}
int GetDaysInMonth(int year, short month)
{
	switch (month) {
	case 2: return IsLeapYear(year) ? 29 : 28;
	case 4:
	case 6:
	case 9:
	case 11: return 30;
	default: return 31;
	}
}
void Owner::age()
{
setlocale(LC_ALL, "rus");
time_t rawtime;
struct tm* timeinfo;
char d[3];
char m[3];
char y[5];
time(&rawtime);     
timeinfo = localtime(&rawtime);
strftime(d, 3, "%d", timeinfo);
strftime(m, 3, "%m", timeinfo);
strftime(y, 5, "%Y", timeinfo);
int currentday = atoi(d);
int currentmonth = atoi(m);
int currentyear = atoi(y);
short AgeDay = currentday - day;
if (AgeDay < 0)
	AgeDay += GetDaysInMonth(currentyear, --currentmonth);
short AgeMonth = currentmonth - month;
if (AgeMonth < 0)
{
	AgeMonth += 12;
	currentyear--;
}
int AgeYear = currentyear - year;
cout << AgeYear << " лет\n" << AgeMonth << " месяцев\n" << AgeDay << " дней\n";
this->agey = AgeYear;
return;
}
void Owner::getinfo()
{
	cout << "Владелец: " << sername << " " << name << " " << fathername << endl;
	cout << "Возраст: ";
	age();
	cout << endl;
}
Owner::Owner(string name, string sername, string fathername, int day, int month, int year)
{
	this->name = name;
	this->sername = sername;
	this->fathername = fathername;
	this->day = day;
	this->month = month;
	this->year = year;
	age();
}
int Owner::getage()
{
	return agey;
}