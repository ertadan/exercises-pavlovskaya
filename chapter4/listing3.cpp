// Write a program which sort rows of rectangular matrix
// of ints in ascending order of their row sum 
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    ifstream fin ( "input.txt" );
    if ( !fin ) { cout << "Файл input.txt не найден." << endl; return 1;}
    int nrow, ncol;
    //enter matrix size
    fin >> nrow >> ncol;
    // memory allocation
    int **a = new int*[nrow];
    for( int i = 0;i < nrow; i++ ) a[i] = new int[ncol];
    // input values
    for( int i = 0;i < nrow; i++ ) 
        for( int j = 0; j < ncol; j++ ) fin >> a[i][j];
    // array for row sums 
    long *sum = new long[nrow];
    for ( int i = 0; i < nrow; i++ ) {
        sum[i] = 0;
        for ( int j = 0; j < ncol; j++ ) sum[i] += a [i][j];
    }
    // print matrix
    for ( int i = 0; i < nrow; i++ ) {
        for( int j = 0; j < ncol; j++ ) cout << setw(4) << a[i][j];
        cout << "| " << sum[i] << endl;
    }
    cout << endl;
    //sorting matrix
    for ( int i = 0; i < nrow -1 ; i++ ) {
        int nmin = i;
        for( int j = i + 1; j < nrow; j++ )
            if(sum[j] < sum[nmin]) nmin = j;
        long buf_sum = sum[i]; sum[i] = sum[nmin]; sum[nmin]= buf_sum;
        for ( int j = 0; j < ncol; j++ ) {
            int buf_a = a[i][j]; a[i][j] = a[nmin][j]; a[nmin][j] = buf_a;
        }
    }
    // print sorted matrix
    for ( int i = 0; i < nrow; i++ ) {
        for ( int j = 0; j < ncol; j++ ) cout << setw(4) << a[i][j] << " ";
        cout << endl;
    }
    // freeing memory
    for ( int i = 0; i < nrow; i++ ) delete [] a[i] ;
    delete [] a;
}