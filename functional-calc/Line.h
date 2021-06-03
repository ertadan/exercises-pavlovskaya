#pragma once
#include "Function.h"
class Line :public Function {
public:
	Line() : name("a*x+b") {}
	const std::string& GetName() const { return name; }
	void SetCoeff();
	double GetVal() const { return (a * x + b); }
private:
	std::string name;
	double a, b;
};
extern Line f_line;