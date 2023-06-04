// Write a program to find in a rectangular matrix of int
// determine the most letf column with all positive elements.
// If such a column not found - print error message.
#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    cout << "Введите количество строк и столбцов: ";
    int nrow, ncol;
    cin  >> nrow >> ncol;
    int **a = new int *[nrow];
    for ( int i = 0; i < nrow; i++ ) a[i] = new int [ncol];
    cout << "Введите элементы массива: " << endl;
    for ( int i = 0; i < nrow; i++)
        for ( int j = 0; j < ncol; j++ ) cin >> a[i][j];
    int num = -1;
    bool all_posit;
    for ( int j = 0; j < ncol; j++) {
        all_posit = true;
        for ( int i = 0 ; i < nrow; i++ )
            if( a[i][j] < 0 ) { all_posit = false; break; }
        if( all_posit ) { num = j; break; }
    }
    if ( -1 == num ) cout << " Столбцов нет " << endl;
    else             cout << " Номер столбца: " << num << endl;
    // freeing memory
    for ( int i = 0; i < nrow; i++ ) delete [] a[i] ;
    delete [] a;
}
