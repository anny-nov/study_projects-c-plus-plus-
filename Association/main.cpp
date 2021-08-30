#include<iostream>
using namespace std;
#include"dot.h"
#include"Triangle.h"

int main()
{
	double x1, y1;
	cout << "Put the first dot's coordinates: ";
	cin >> x1 >> y1;
	Dot* A = new Dot(x1, y1);
	cout << "Put the second dot's coordinates: ";
	cin >> x1 >> y1;
	Dot* B = new Dot(x1, y1);
	cout << "Put the third dot's coordinates: ";
	cin >> x1 >> y1;
	Dot* C = new Dot(x1, y1);
	Triangle* ABC = new Triangle(A, B, C);
	cout << "The lenth of sides is " << endl;
	ABC->len_side();
	cout << "The perimeter is " << ABC->perimeter() << endl;
	cout << "The square is " << ABC->Square() << endl;
	return 0;
}