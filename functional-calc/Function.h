#pragma once
#ifndef  FUNCTION_H
#define  FUNCTION_H

#include <string>

// Абстрактный класс функция, определяющий конкретные
// функции калькулятора

class Function {
public:
	virtual ~Function() {}
	void SetArg(double arg) { x = arg; }
	virtual void SetCoeff() = 0;
	virtual double GetVal() const = 0;
	virtual const std::string& GetName() const = 0;
protected:
	double x;
};

#endif // ! FUNCTION_H
