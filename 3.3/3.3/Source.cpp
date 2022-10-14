// Lab_03_3.cpp
// < Костик Влад >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 9
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // результат обчислення виразу
	cout << "x = "; cin >> x;
		// розгалуження в повній формі
	if (x <= -7)
		y = 0;
	else
		if (-7 < x && x <= -3)
			y = (x + 7);
		else
			if (-3 < x && x < -2)
				y = 4;
			else
				if (-2 < x && x <= 2)
					y = (x * x);
				else
					if (2 < x && x <= 4)
						y = (-(x - 4) * 2);
					else
						y = 0;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}