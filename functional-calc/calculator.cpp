#include <iostream>
#include <vector>
#include "Function.h"
#include "Exp.h"
#include "Line.h"
#include "Action.h"
#include "Calculation.h"
#include "Tabulation.h"
#include "AnyAction.h"
#include "Menu.h"
#include "sin.h"
#include "cos.h"

using namespace std;
// создаем массив указателей на функции
// используем ссылки на глобальные объекты, созданные в
// реализации функций
Function* pObjs[] = { &f_exp, &f_line,
                       &f_sin, &f_cos };
vector<Function*>funcList(pObjs, pObjs
		+ sizeof(pObjs) / sizeof(Function*));

// создаем массив указателей на действия
Action* pActs[] = { &calculation,&tabulation,
		&any_action };
vector<Action*> operList(pActs, pActs
		+ sizeof(pActs) / sizeof(Action*));


int main() {

	// Вызываем конструктор Меню
	Menu menu(funcList, operList);
	// Главный цикл
	while (Function* pObj = menu.SelectObject()) {
		Action* pAct = menu.SelectAction(pObj);
		pAct->Operate(pObj);
	}
	cout << "Bye!\n";
}
