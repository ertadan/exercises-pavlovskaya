#include <cstdio>
#include <cmath>

using namespace std;

int main () {
    double Xn, Xk, dX, t, y;
    printf("Enter Xn, Xk, dX, t \n");
    scanf("%lf%lf%lf%lf", &Xn, &Xk,&dX, &t);
    printf(" ------------------------- \n");
    printf(" |       X      |     Y      |\n");
    printf(" ------------------------- \n");
    double x = Xn;
    while (x <= Xk) {
        if( x < 0 )             y = t;
        if( x >= 0 && x < 10 )  y = t * x;
        if( x >= 10 )           y = 2 * t;
        if( t > 100 ) printf("|%9.2lf    |%9d     |\n", x, (int) y);
        else printf("|%9.2lf    |%9.2lf     |\n", x, y);
        x += dX;
    printf(" ------------------------- \n");
    }
}