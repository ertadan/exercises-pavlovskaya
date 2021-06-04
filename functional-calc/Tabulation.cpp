#include <iostream>
#include <iomanip>
#include "Tabulation.h"

using namespace std;

// реализация метода табуляции значений функции в
// введенном пользователем диапазоне

void Tabulation::Operate(Function* pFunc) {
	cout << "Tabulation for function y = ";
	cout << pFunc->GetName() << "\n";
	pFunc->SetCoeff();
	double x_beg, x_end, x_step;
	cout << "Enter x_beg = ";
	cin >> x_beg;
	cout << "Enter x_end = ";
	cin >> x_end;
	cout << "Enter x_step = ";
	cin >> x_step;
	cin.get();
	cout << "-------------------------" << "\n";
	cout << "x                y" << "\n";
	cout << "-------------------------" << "\n";
	for (double x = x_beg; x <= x_end; x += x_step) {
		pFunc->SetArg(x);
		cout << setw(6) << x << setw(14) << pFunc->GetVal() << "\n";
	}
	cin.get();
}
// создаем объект с глобальной областью видимости.

Tabulation tabulation;
