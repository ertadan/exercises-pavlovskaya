/**
 * Program for finding count of positive elements between 
 * min and max element of given array
*/
#include <iostream>
using namespace std;

int main () {
    const int n = 10;
    int a [n] = {1, 3, -5, 1, -2, 1, -1, 3, 8,4};
    int imax = 0, imin = 0, count = 0;
    for(int i = imax = imin = 0; i < n; i++) {
        if( a[i] > a[imax] ) imax = i;
        if( a[i] < a[imin] ) imin = i;
    }
    cout << "\n\tmax = " << a[imax] << " min = " << a[imin];
    int ibeg = imax < imin ? imax: imin;
    int iend = imax < imin ? imin: imax;
    cout << "\n\tibeg = " << ibeg << " iend = " << iend;
    for( int i = ibeg + 1; i < iend; i++) {
        if(a[i] > 0 ) count++;
    }
    cout << "Количество положительных: " << count << endl;
}