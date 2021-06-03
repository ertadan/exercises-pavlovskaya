#include <iostream>
#include "Calculation.h"
using namespace std;
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
Calculation calculation;