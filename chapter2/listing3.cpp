#include <iostream>

using namespace std;

int main () {
    double x,y;
    cout << "Введите значения  x и y" << endl;
    cin >> x >> y;
    if ( x * x + y * y <= 1 ||
        x <= 0 && y <= 0 && y >= -x -2  )
            cout << "Точка попадает в область" << endl;
    else cout << "Точка не попадает в область" << endl;
}