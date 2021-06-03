#pragma once
#include <math.h>
#include "Function.h"
class Cosinus :public Function {
public:
	Cosinus() : name("cos(x)") {}
	const std::string& GetName() const { return name; }
	void SetCoeff() {}
	double GetVal() const { return cos(x); }
private:
	std::string name;
};
extern Cosinus f_cos;
