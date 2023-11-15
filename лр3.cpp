#include <iostream>
#include <iomanip>
#include "math.h"
#include "windows.h"


using namespace std;
int main()
{
    SetConsoleOutputCP(1251);
    int a, b;
    double y, x, h;
    cout << "Введіть значення a =";
    cin >> a;
    cout << "Введіть значення b =";
    cin >> b;
    cout << "Введіть значення h =";
    cin >> h;
    x = a;
    while (x <= b)
    {
        y = sin(fabs((x)) + pow(cos(x), 2));
        cout << setw(5) << x << "\t|\t" << setw(10) << y << endl;
        x += h;
    }