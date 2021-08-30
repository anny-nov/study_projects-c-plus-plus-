#include<iostream>
#include<fstream>
using namespace std;

void output_ar(const int A[], const int N);
bool desc(const int a, const int b);
bool asc(const int a, const int b);
void bubble(int A[], const int N, bool (*compare)(int a, int b));
int main()
{
	bool (*fromf[2])(int, int) = { desc,asc };
	//const int N = 10;
	int choose = 0;
	//int a[N] = { 3,6,2,8,5,9,1,4,0,3 };
	int n;
	cout << "How many digits will your array has?" << endl;
	cin >> n;
	int *a = new int[n];
	int* a1 = new int[n];
	int i;
	cout << "Put elements of array:" << endl;
	for (i = 0; i < n; i++)
	{
		cin >>a[i];
	}
	ofstream file("file.txt", ios::out | ios::app);
	if (!file)
	{
		cout << "File can not be opened." << endl;
		return 1;
	}

	else cout << "Successfuly opened." << endl;
	for (i = 0; i < n; i++)
	{
		file << a[i] << " ";
	}
	cout << "Sort in descending order: 2" << endl;
	cout << "sort ascending: 1" << endl;
	cout << "What do you choose?";
	cin >> choose;
	cout << "Source data: " << endl;
	output_ar(a, n);
	/*switch (choose)
	{
		case 1: bubble(a, N, desc); break;
		case 2: bubble(a, N, asc); break;
		default: cout << "\rUnknown operation";
	}*/
	bubble(a, n, (fromf[choose - 1]));
	file << '\n';
	for (i = 0; i < n; i++)
	{
		file << a[i] << " ";
	}
	output_ar(a, n);
	file.close();
	delete [] a;
}
void output_ar(const int A[], const int N)
{
	for (int i = 0; i < N; i++)      
		cout << A[i] << "  ";
		
	cout << "\n";
}
bool desc(const int a, const int b)
{
	return a > b;
}
bool asc(const int a, const int b)
{
	return a < b;
}
void bubble(int A[], const int N, bool (*compare)(int a, int b))
{
	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < N - 1; j++)
		{
			if ((*compare)(A[j], A[j + 1])) swap(A[j], A[j + 1]);
		}
	}
}