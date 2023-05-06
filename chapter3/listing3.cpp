/**
 * Program for finding sum of elements in array that are right
 * from last negative element (not good)
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
    int ineg;
    for (int i = 0;  i < n; i++) {
        if (a[i] < 0 ) ineg = i;
    }
    double sum = 0;
    for(int i = ineg + 1; i < n; i++) {
        sum += a[i];
    }
    cout << "Сумма: " << sum << endl;
    delete [] a;
}