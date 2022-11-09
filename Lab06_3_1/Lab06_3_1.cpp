// Lab06_3_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int n, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < n - 1)
		Create(a, n, Low, High, i + 1);
}

void Print(int* a, const int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}

int Max(int* a, const int size, int i, int max)
{
	if (a[i] > max && a[i] % 2 == 0)
		max = a[i];
	if (i < size - 1)
		return Max(a, size, i + 1, max);
	else
		return max;
}
int main()
{
	srand((unsigned)time(NULL));

	const int n = 15;
	int a[n];

	int Low = -100;
	int High = 100;


	Create(a, n, Low, High, 0);
	Print(a, n, 0);

	cout << "max =" << Max(a, n, 0, 0);

	return 0;
}
