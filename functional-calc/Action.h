#pragma once
#ifndef ACTION_H
#define ACTION_H
#include "Function.h"

// класс Действий калькулятора, от него наследуются
// все классы функций калькулятора ( расчет координат
// или табуляция

class Action {
public:
	virtual ~Action() {}
	virtual void Operate(Function*) = 0;
	virtual const std::string& GetName() const = 0;
};
#endif // !ACTION_H
