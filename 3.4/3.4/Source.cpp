// Lab_03_4.cpp
// < Костик Влад >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 9
#include <iostream>
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    double x; // вхідний аргумент
    double y; // вхідний параметр
    double R;
    cout << "x = "; cin >> x;
    cout << "R = "; cin >> R;
    cout << "y = "; cin >> y;


    // розгалуження в повній формі
    if ((y <= 0 && x <= 0 && (x * x) + (y * y) <= R * R) || (x >= 0 && (x * x) + (y * y) <= R * R && y <= (x - 1) * (x - 1)))

        cout << "yes" << endl;
    else
        cout << "no" << endl;
    cin.get();
    return 0;
}
