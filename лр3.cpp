#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int num, a, b;
	cout << "\nВведіть num:";
	cin >> num;
	a = num % 10;
	b = (num / 10) % 10;
	cout << "Result :" << (a < b);
}
