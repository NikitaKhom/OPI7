#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int num, a;
	Float b;
	cout << "\nВведіть значення num:";
	cin >> num;
	a = num % 10;
	b = (num / 10) % 10;
	cout << "Вивести результати :" << (a < b);
}
