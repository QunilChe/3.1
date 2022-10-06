#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	cout << "x = "; cin >> x;
	A = x * x;
	// спосіб 1: розгалуження в скороченій формі
	if (x < (-1))
		B = (abs(2+x)+ pow(sin(x), 2));
	if (-1 <= x && x <= 1)
		B = atan((x*x)+1)+1;
	if (x > 1)
		B = exp(cos(x)) + log10((1/x)+1);
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// спосіб 2: розгалуження в повній формі
	if (x < (-1))
		B = (abs(2 + x) + pow(sin(x), 2));
	else
		if (x > 1)
			B = exp(cos(x)) + log10((1 / x) + 1);
		else
			B = atan((x * x) + 1) + 1;
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}