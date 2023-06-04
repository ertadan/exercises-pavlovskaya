/**
 * Variant 17
 * By rearranging the elements of a square  matrix of doubles, achieve 
 * that its maximum element is in the upper left corner, the next
 * largest - in position (2,2), the next largest - in position (3,3), etc.,
 * after-thus completing the entire main diagonal.
 * Find the number of the first row that does not contain any positive element.
*/
// Write a program which sort rows of rectangular matrix
// of ints in ascending order of their row sum 
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    // on Linux we can use such a command to generate random numbers
    // $ shuf -i 0-100 -n 25 | tr '\n' ' ' >> chapter4/task1_input.txt 
    ifstream fin ( "task1_input.txt" );
    if ( !fin ) { cout << "Файл input.txt не найден." << endl; return 1;}
    int nrow;
    //enter matrix size
    fin >> nrow ;
    // memory allocation
    int **a = new int*[nrow];
    for( int i = 0;i < nrow; i++ ) a[i] = new int[nrow];
    // input values
    for( int i = 0;i < nrow; i++ ) 
        for( int j = 0; j < nrow; j++ ) fin >> a[i][j];
    // print matrix
    for ( int i = 0; i < nrow; i++ ) {
        for( int j = 0; j < nrow; j++ ) cout << setw(4) << a[i][j];
        cout << endl;
    }
    cout << "---------------------------------" << endl;
    // 
    for( int n = 0 ; n < nrow; ++n) {
        int row = 0, col = 0;
        int max = INT32_MIN;
        for( int  i = 0 ; i < nrow; ++i) {
            for( int j = 0 ; j < nrow; ++j) {
                if( i != j || i > n) {
                    if (a [i][j] > max) {
                        max = a[i][j];
                        row = i; col = j;
                    }
                }
            }
        }
        int temp = a[n][n];
        a[n][n] = a[row][col];
        a[row][col] = temp;
    }
        for ( int i = 0; i < nrow; i++ ) {
        for( int j = 0; j < nrow; j++ ) cout << setw(4) << a[i][j];
        cout << endl;
    }
    cout << endl;
    // freeing memory
    for ( int i = 0; i < nrow; i++ ) delete [] a[i] ;
    delete [] a;
}