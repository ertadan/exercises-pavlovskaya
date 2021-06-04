#include <iostream>
#include "AnyAction.h"

using namespace std;

// добавляем реализацию метода любого действия
// например, вывести рекламу

void AnyAction::Operate(Function*) {
	cout << "Advertisment!!!:)" << "\n";
	cin.get();
}

// создаем глобальный объект
AnyAction any_action;
