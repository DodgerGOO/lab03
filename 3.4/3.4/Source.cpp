// Lab_03_4.cpp
// < ������ ���� >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 9
#include <iostream>
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    double x; // ������� ��������
    double y; // ������� ��������
    double R;
    cout << "x = "; cin >> x;
    cout << "R = "; cin >> R;
    cout << "y = "; cin >> y;


    // ������������ � ����� ����
    if ((y <= 0 && x <= 0 && (x * x) + (y * y) <= R * R) || (x >= 0 && (x * x) + (y * y) <= R * R && y <= (x - 1) * (x - 1)))

        cout << "yes" << endl;
    else
        cout << "no" << endl;
    cin.get();
    return 0;
}
