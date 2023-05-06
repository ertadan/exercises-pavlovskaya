/**
 * Program for finding sum of elements in array that are right
 * from last negative element (better)
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
    int ineg = -1;
    for (int i = 0;  i < n; i++) {
        if (a[i] < 0 ) ineg = i;
    }
    if (ineg == -1){
        cout << endl << "Отрицательных элементов нет!" << endl;
    } else if (ineg == n - 1) {
        cout << endl << "Отрицательный элемент - последний!" << endl;
    } else {
        double sum = 0;
        for(int i = ineg + 1; i < n; i++) {
            sum += a[i];
        }
        cout << "Сумма: " << sum << endl;
    }
    delete [] a;
}