#include <iostream>
#include <iomanip>
#include "math.h"
#include "windows.h"
#include "studio.h"


using namespace std;
int main()
{
    SetConsoleOutputCP(1251);
    int a, c;
    double y, x, h;
    printf("Введіть значення a:");
    scanf_s("%d", &a) << '\n';
    printf("Введіть значення c:")
    scanf_s("%d", &c) << '\n';
    printf("Введіть значення h:");
    scanf_s("%d", &h) << '\n';
    x = a;
    while (x <= c)
    {
        y = sin(fabs((x)) + pow(cos(x), 2));
        cout << setw(5) << x << "\t|\t" << setw(10) << y << endl;
        x += h;
    }