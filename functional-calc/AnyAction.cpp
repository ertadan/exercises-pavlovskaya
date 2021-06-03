#include <iostream>
#include "AnyAction.h"
using namespace std;
void AnyAction::Operate(Function*) {
	cout << "Advertisment!!!:)" << "\n";
	cin.get();
}
AnyAction any_action;