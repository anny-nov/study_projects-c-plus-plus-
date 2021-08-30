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
		cout << "\nВведите заголовок : ";
		cin >> title;
		cout << "Введите цену : ";
		cin >> price;
	}
	virtual void getdata()
	{
		cout << "\nЗаголовок: " << title;
		cout << "\nЦена:" << price;
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
		cout << "Введите число страниц : ";
		cin >> pages;
	}
	void getdata()
	{
	Item::getdata();
	cout << "\nСтраниц:" << pages;
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
		cout << "Введите время звучания : ";
		cin >> time;
	}
	void getdata()
	{
		Item::getdata();
		cout << "\nВремя звучания : " << time;
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
		cout << "\nВводить данные для книги или звукового файла(b / a) ? ";
		cin >> choice;
		if (choice == 'b')
			pubarr[n] = new Paperbook;
		else
			pubarr[n] = new AudioBook;
		pubarr[n++]->setdata();
		cout << "Продолжать((у / n) ? ";
		cin >> choice;
	}
	while (choice == 'y'); 
	for (int j = 0; j < n; j++)
		pubarr[j]->getdata();
	cout << endl; 
	return 0;
}