#include <iostream>
#include <cmath>

using namespace std;

int main () {
    const int MaxIter = 500;
    double Xstart,Xfinish, dX, eps, ch, y ;
    cout << "\nВведите Xнач Xкон  dx и точность:\n";
    cin >> Xstart >> Xfinish >> dX >> eps;
    cout << "------------------------------------------------" << endl;
    cout << "|       X         |         Y         |    n    |" << endl;
    cout << "------------------------------------------------" << endl;
    int n = 0 ;
    for( double x = Xstart; x < Xfinish; x += dX) {
            /* Variant 7*/
        bool done = true;
        double ch = 1, y = ch;
        ch *= -2 * x * x;
        y += ch;
        for ( int power = 2, n = 1; fabs(ch) > eps; n++, power++){
            ch *= (-(power + 1))/power * x;
            y += ch;
            if(n > MaxIter){
                cout << "\nРяд сходится!";
                done = false; break;
            }
        }
    cout << "|     " << x  << "     |     " << y << "       |      " << n << "      |" << endl;
    cout << "------------------------------------------------" << endl;
    }
}