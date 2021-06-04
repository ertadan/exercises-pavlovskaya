#include <iostream>
#include"Line.h"
using namespace std;

// реализация функции установки коэффициентов
//  a и b  для формулы  у = a * x + b
void Line::SetCoeff() {
	cout << "Enter a = ";
	cin >> a;
	cout << "Enter b = ";
	cin >> b;
}
Line f_line;
