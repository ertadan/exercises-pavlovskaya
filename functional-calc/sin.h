#pragma once
#include <math.h>
#include "Function.h"
class Sinus :public Function {
public:
	Sinus() : name("sin(x)") {}
	const std::string& GetName() const { return name; }
	void SetCoeff() {}
	double GetVal() const { return sin(x); }
private:
	std::string name;
};
extern Sinus f_sin;
