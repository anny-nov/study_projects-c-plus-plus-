#include <iostream>
using namespace std;
template<class T>
void sorting(T arr[], int size)
{
	int j = 0;
	for (int i = 0; i < size; i++)
	{
		T x = arr[i];
		for (j = i - 1; j >= 0 && x < arr[j]; j--)
			arr[j + 1] = arr[j];
		arr[j + 1] = x;
	}
}
template<class T>
void PutConsole(T arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << ";";
}
template<class T>
double Average(T arr[],int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
		sum += arr[i];
	double aver = sum / size;
	return aver;
}

int main()
{
	int arr[] = { 9,3,17,6,5,4,31,2,12 };
	int k1 = sizeof(arr) / sizeof(arr[0]);
	sorting(arr, k1);
	//for (int i = 0; i < k1; i++)
		//cout << arr[i] << ";";
	PutConsole(arr, k1);
	double arrd[] = { 2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2 };
	char arrc[] = "Hello, word";
	int k2 = sizeof(arrd) / sizeof(arrd[0]);
	int k3 = sizeof(arrc) / sizeof(arrc[0]) - 1;
	cout << endl;
	cout << "Average score = " << Average(arr, k1) << endl;
	sorting(arrd, k2);
	PutConsole(arrd, k2);
	//for (int i = 0; i < k2; i++)
		//cout << arrd[i] << ";";
	cout << endl;
	cout << "Average score = " << Average(arrd, k2) << endl;
	sorting(arrc, k3);
	//for (int i = 0; i < k3; i++)
		//cout << arrc[i] << ";";
	PutConsole(arrc, k3);
	cout << endl;
	cout << "Average score = " << Average(arrc, k3) << endl;
	long arrl[] = {38833,474663,2445,2746};
	int k4 = sizeof(arrl) / sizeof(arrl[0]);
	cout << "Average score = " << Average(arrl, k4) << endl;
}