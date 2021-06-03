#include <iostream>
#include "Menu.h"
using namespace std;
Menu::Menu(vector<Function*>_pObj, vector<Action*>_pAct) :pObj(_pObj), pAct(_pAct) {
	pObj.push_back(0);
}
Function* Menu::SelectObject() const {
	int nItem = pObj.size();
	cout << "==================================\n";
	cout << "Select 1 of the following function:\n ";
	for (int i = 0; i < nItem; i++) {
		cout << i + 1 << ". ";
		if (pObj[i]) cout << pObj[i]->GetName() << "\n";
		else cout << "Exit" << "\n";
	}
	int item = SelectItem(nItem);
	return pObj[item - 1];
}
Action* Menu::SelectAction(Function* pObj) const {
	int nItem = pAct.size();
	cout << "==================================\n";
	cout << "Select 1 of the following Action: \n";
	for (int i = 0; i < nItem; i++) {
		cout << i + 1 << ". " << pAct[i]->GetName() << "\n";
	}
	int item = SelectItem(nItem);
	return pAct[item - 1];
}
int Menu::SelectItem(int nItem) const {
	cout << "-------------------------" << "\n";
	int item;
	while (true) {
		cin >> item;
		if ((item > 0) && (item <= nItem) && (cin.peek() == '\n')) {
			cin.get();
			break;
		}
		else {
			cout << "Error (must be number from 1 to " << nItem << "): " << "\n";
			cin.clear();
			while (cin.get() != '\n') {};
		}
	}
	return item;
}