/**
 * Variant 4
 * Shrink the array by removing from it all elements, which 
 * module is below 1. All freed elements at array ending 
 * replace to zeroes
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;

int main () {
    srand(std::time(0)); //use current time as seed for random generator
    const int n = 20;
    double  arr [n] ;

    for(int i = 0; i < n; i++){
        arr[i]  = rand() % 10 + 1 / (double) ( rand() % 10 + 1);
    }
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    int new_index = 0;
    for(int i = 0;i < n; i++)
    {
       if ( fabs(arr[i]) - 1.000  < 0.00001)
           arr[new_index++] = arr[i];
    }
    for(int i = new_index; i < n; i++)
       arr[i] = 0;
    
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}