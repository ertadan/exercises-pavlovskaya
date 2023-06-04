//Write code for matrix of integers 10x20 to determine
// its average element and count of positive elements in
// each row

#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    const int nrow = 10, ncol = 20;
    int a[nrow][ncol];
    cout << "Введите элементы массива:" << endl; 
    for (int i = 0; i < nrow; i++)
        for( int j = 0; j < ncol; j++) cin >> a[i][j];
    for (int i = 0; i < nrow; i++) {
        for( int j = 0; j < ncol; j++) 
            cout << setw(4) << a[i][j] << " ";
        cout << endl;
    }
    int n_pos_el;
    float s = 0;
    for (int i = 0; i < nrow; i++) {
        n_pos_el = 0;
        for (int j = 0; j < ncol; j++) {
            s += a[i][j];
            if (a [i][j] > 0) n_pos_el++;
        }
        cout << " Строка: " << i << " кол-во: " << n_pos_el << endl;
    }
    s /= nrow * ncol;
    cout << "Среднее арифметическое: " << s << endl;
}