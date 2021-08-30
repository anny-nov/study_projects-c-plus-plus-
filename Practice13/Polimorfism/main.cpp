#include <iostream>
#include <string>
#include <windows.h>
using namespace std; 

class Item {
private:
	string title;
	double price;
public:
	virtual void setdata()
	{
		cout << "\n������� ��������� : ";
		cin >> title;
		cout << "������� ���� : ";
		cin >> price;
	}
	virtual void getdata()
	{
		cout << "\n���������: " << title;
		cout << "\n����:" << price;
	}
};

class Paperbook : public Item
{
private:
int pages;
public:
	void setdata()
	{
		Item::setdata();
		cout << "������� ����� ������� : ";
		cin >> pages;
	}
	void getdata()
	{
	Item::getdata();
	cout << "\n�������:" << pages;
	}
};

class AudioBook : public Item
{
private:
double time;
public:
	void setdata()
	{
		Item::setdata();
		cout << "������� ����� �������� : ";
		cin >> time;
	}
	void getdata()
	{
		Item::getdata();
		cout << "\n����� �������� : " << time;
	}
};

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	//setlocale(LC_ALL, "Russian");
	Item* pubarr[100];
	int n = 0;
	char choice;
	do
	{
		cout << "\n������� ������ ��� ����� ��� ��������� �����(b / a) ? ";
		cin >> choice;
		if (choice == 'b')
			pubarr[n] = new Paperbook;
		else
			pubarr[n] = new AudioBook;
		pubarr[n++]->setdata();
		cout << "����������((� / n) ? ";
		cin >> choice;
	}
	while (choice == 'y'); 
	for (int j = 0; j < n; j++)
		pubarr[j]->getdata();
	cout << endl; 
	return 0;
}