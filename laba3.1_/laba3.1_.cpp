// Lab_03_1.cpp
// < ���������� ����� >
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 6


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
	A = 5 * exp(3 * x);
	// ����� 1: ������������ � ��������� ����
	if (x <= -1.0)
		B = 3 + sin(abs(x));
	if (-1.0 < x && x <= 3.0)
		B = 2 * exp((x / 4) - 1);
	if (x > 3)
		B = 7 - sqrt(2) * x * x * x;
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// ����� 2: ������������ � ����� ����
	if (x <= -1.0)
		B = 3 + sin(abs(x));
	else
		if (x > 3.0)
			B = 7 - sqrt(2) * x * x * x;
		else
			B = 2 * exp((x / 4) - 1);
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}
