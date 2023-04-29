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
    for (int n = 0; fabs(ch) > eps; n++){
        // Warning!!! there is a typo in the book!
        ch *= x * x / ( ( 2 * n + 2) * (2 * n + 3) );
        y += ch;
        if(n > MaxIter){
            cout << "\nРяд сходится!";
            done = false; break;
        }
    }
    if (done) cout << "\nЗначение функции: " << y << " для x = " << x << endl;
}