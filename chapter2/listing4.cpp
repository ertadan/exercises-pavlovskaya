#include <iostream>

using namespace std;

int main () {
    double x,y;
    cout << "Введите значения  x и y" << endl;
    cin >> x >> y;
    if ( y < 0 && ((x - 1) * (x - 1) + y * y <= 1 ||
                    (x + 1) * (x + 1) + y * y <= 1) )
            cout << "Точка попадает в область" << endl;
    else cout << "Точка не попадает в область" << endl;
}