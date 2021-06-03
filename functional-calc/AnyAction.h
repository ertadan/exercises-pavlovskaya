#pragma once
#include "Action.h"
class AnyAction :public Action {
public:
	AnyAction() : name("Any Action") {}
	const std::string& GetName() const { return name; }
	void Operate(Function*);
private:
	std::string name;
};
extern AnyAction any_action;