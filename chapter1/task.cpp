#include <iostream>
#include <math.h>

using namespace std;

int main() {
    /* Variant  7 */
    double angle, alpha, z1, z2;
    cout << endl << "Введите значение угла" << endl;
    cin >> angle;
    // converting degrees to radians
    alpha = angle * M_PI / 180;
    z1 = pow(cos(3 * M_PI / 8 - alpha / 4),2) 
        - pow(cos(11 * M_PI / 8  + alpha / 4),2);
    
    z2 = sqrt(2) / 2 * sin(alpha / 2);

    cout << " Угол " << angle <<" градусов равен " << alpha << " радиан." << endl 
         << "z1 = " << z1 << endl 
         << "z2 = " << z2 << endl;
    return 0;
}