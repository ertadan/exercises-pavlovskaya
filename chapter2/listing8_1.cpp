#include <iostream>
#include <cmath>

using namespace std;

int main () {
    const int MaxIter = 500;
    double x, eps;
    cout << "\nВведите аргумент и точность:\n";
    cin >> x >> eps;
    bool done = true;
    double ch = x, y = ch;
    int n;
    for (n = 0; fabs(ch) > eps; n++){
        // typo in the book!
        ch *= x * x / ( ( 2 * n + 2) * (2 * n + 3) );
        y += ch;
        if(n > MaxIter){
            cout << "\nРяд сходится!";
            done = false; break;
        }
    }
        cout << "Количество просуммированных членов ряда " << n + 1 << endl;
        if (done) cout << "\nЗначение функции: " << y << " для x = " << x << endl;
        cout << "cosh(" << x << ") = " << cosh(x) << endl;

}