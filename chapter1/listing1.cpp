#include <iostream>

using namespace std;

int main() {
    double fahr, cels;
    cout << endl << "Введите температуру по Фаренгейту" << endl;
    cin >> fahr;
    cels = 5.0 / 9 * (fahr - 32);
    cout << "По Фаренгейту: " << fahr << ", по Цельсию: " << cels << endl;
    return 0;
}