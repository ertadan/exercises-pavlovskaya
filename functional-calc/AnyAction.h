#pragma once
#include "Action.h"

// Наследуемся от класса Действия

class AnyAction :public Action {
public:
	AnyAction() : name("Any Action") {}
	const std::string& GetName() const { return name; }
	void Operate(Function*);
private:
	std::string name;
};
extern AnyAction any_action;
