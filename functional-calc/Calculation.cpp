#include <iostream>
#include "Calculation.h"

using namespace std;

// добавляем реализацию функции расчет значения
// функции для  х, который введет пользователь

void Calculation::Operate(Function* pFunc) {
	cout << "Calculation for function y = " << pFunc->GetName() << "\n";
	pFunc->SetCoeff();
	double x;
	cout << "Enter x = ";
	cin >> x;
	cin.get();
	pFunc->SetArg(x);
	cout << "y = " << pFunc->GetVal() << "\n";
	cin.get();
}
// создаем объект с глобальным доступом
Calculation calculation;
