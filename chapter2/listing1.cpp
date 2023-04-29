#include <iostream>

using namespace std;

int main () {
    float x,y;
    cout << "Введите значение аргумента" << endl;
    cin >> x;
    if ( x < -2 )            y = 0;
    if ( x >= -2 && x < -1 ) y = -x - 2;
    if ( x >= -1 && x < 1 )  y = x;
    if ( x >= 1 && x < 2 )   y = -x + 2;
    if ( x >= 2 )            y = 0;
    cout << "Для x = " << x << " значение функции y = " << y << endl;
}