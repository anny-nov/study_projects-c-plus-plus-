#include<iostream>
#include<string>
using namespace std;
class Student
{
public:
	void set_name(string student_name)
	{
		name = student_name;
	}
	string get_name()
	{
		return name;
	}
	void set_lastname(string student_lastname)
	{
		lastname = student_lastname;
	}
	string get_lastname()
	{
		return lastname;
	}
	void set_scores(int student_scores[])
	{
		for (int i = 0; i < 5; ++i)
		{
			scores[i] = student_scores[i];
		}
	}
	void set_average_score(double ball)
	{
		average_score = ball;
	}
	double get_average_score()
	{
		return average_score;
	}
private:
	int scores[5];
	double average_score;
	string name;
	string lastname;
};
int main()
{
	Student student01;
	string name, lastname;
	int scores[5];
	cout << "Name: ";
	getline(cin, name);
	cout << "Lastname: ";
	getline(cin, lastname);
	int sum = 0,i;
	for (i = 0; i < 5; i++)
	{
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		sum += scores[i];
	}
	student01.set_name(name);
	student01.set_lastname(lastname);
	student01.set_scores(scores);
	double average_score = sum / 5.0;
	student01.set_average_score(average_score);
	cout << "Average ball for " << student01.get_lastname() << " " << student01.get_name() << " is " << student01.get_average_score() << endl;
	return 0;
}