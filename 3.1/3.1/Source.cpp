// Lab_03_1.cpp
// < ������ ���� >
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 9
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	cout << "x = "; cin >> x;

	A = 2 * (abs(x) * abs(x) * abs(x));
	// ����� 1: ������������ � ��������� ����
	if (x<=-0.1)
		B = 5*cos(18*x);
	if (-0.1<x && x<1.2)
		B = atan(x+2)/5;
	if (x>=1.2)
		B = (cos(x)/sin(x))+18;
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// ����� 2: ������������ � ����� ����
	if (x<=-0.1)
		B=5*cos(18*x);
	else
		if (x>=1.2)
			B = cos(x)/sin(x)+18;
		else
			atan(x+2)/5;
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}