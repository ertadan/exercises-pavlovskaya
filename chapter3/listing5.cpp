/**
 * Program for finding sum of elements in array that are right
 * from last negative element (another approach)
 * We go from the end untill we found negative number
*/
#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Введите количество элементов" << endl;
    cin >> n;
    double* a = new double[n];
    cout << "Введите элементы массива: ";
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
    bool flag_neg = false;
    double sum = 0;
    for(int i = n - 1; i >= 0; i--) {
        if(a[i] < 0 ) {
            flag_neg =  true; 
            break;
        }
        sum += a[i];
    }
    if( flag_neg) {
        cout << "Сумма: " << sum << endl;
    } else {
        cout << "Отрицательных элементов нет" << endl;
    }
    delete [] a;
}