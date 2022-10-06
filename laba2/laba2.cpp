// Lab_02.cpp
// < Гребень, Юрій >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 0.3
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double m = 5; // число пі
	double x; // вхідний параметр
	//double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "x = "; cin >> x;
	//z1 = 1 - (0.25 * sin(m * 2) * sin(m * 2)) + cos(m * 2);
	z2 = cos(m) * cos(m) + cos(m) * cos(m) * cos(m) * cos(m);
	cout << endl;
	//cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}