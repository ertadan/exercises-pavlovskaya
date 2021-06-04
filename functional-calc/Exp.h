#pragma once
#include <math.h>
#include "Function.h"

// Класс наследуется от абстрактного класса  Function
// и реализует работу с функцией экспоненты  из math.h

class Exp :public Function {
public:
	Exp() : name("e^x") {}
	const std::string& GetName() const { return name; }
	void SetCoeff() {}
	double GetVal() const { return exp(x); }
private:
	std::string name;
};

extern Exp f_exp;
