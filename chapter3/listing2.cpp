/**
 * Program for finding count of positive elements between 
 * min and max element of given array
 * another implementation
*/
#include <iostream>
using namespace std;

int main () {
    const int n = 10;
    int a [n] ;
    cout << "Введите " << n << " целых чисел:"<< endl;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
    int imax = 0, imin = 0, count = 0;
    for(int i = imax = imin = 0; i < n; i++) {
        if( a[i] > a[imax] ) imax = i;
        if( a[i] < a[imin] ) imin = i;
    }
    int d = imax < imin ? 1 : imax < imin ? -1 : 0;
    for( int i = imax + d; i < imin; i += d) {
        if(a[i] > 0 ) count++;
    }
    cout << "Количество положительных: " << count << endl;
}