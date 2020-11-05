// Lab_03_1.cpp
// < Ілюшин Роман >
// Лабораторна робота No 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 0.2
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	cout << "x = "; cin >> x;
	A = 0.1 / x + 4;
	// спосіб 1: розгалуження в скороченій формі
	if (x < 1)
		B = 0.65 * x + 8;
	if (1 <= x && x <= 5)
		B = atan((x + 6.1) / 2 + exp(x));
	if (x >= 5)
		B = sqrt(1 + sqrt(x));
	y = A - B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// спосіб 2: розгалуження в повній формі
	if (x < 1)
		B = 0.65 * x + 8;
	else
		if (x >= 5)
			B = sqrt(1 + sqrt(x));
		else
			B = atan((x + 6.1) / 2 + exp(x));
	y = A - B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}