// Lab_02.cpp
// < �������, ��� >
// ����������� ������ � 2.
// ˳��� ��������.
// ������ 0.3
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double m = 5; // ����� �
	double x; // ������� ��������
	//double z1; // ��������� ���������� 1-�� ������
	double z2; // ��������� ���������� 2-�� ������
	cout << "x = "; cin >> x;
	//z1 = 1 - (0.25 * sin(m * 2) * sin(m * 2)) + cos(m * 2);
	z2 = cos(m) * cos(m) + cos(m) * cos(m) * cos(m) * cos(m);
	cout << endl;
	//cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}