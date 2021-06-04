#pragma once
#include "Action.h"

// наследуем от Действия  класс табуляции

class Tabulation :public Action {
public:
	Tabulation() :name("Tabulation") {}
	const std::string& GetName() const { return name; }
	void Operate(Function*);
private:
	std::string name;
};
extern Tabulation tabulation;
