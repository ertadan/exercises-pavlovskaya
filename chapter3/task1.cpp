/**
 * Variant 4
 * Find sum of elements with odd indexes 
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
    srand(std::time(0)); //use current time as seed for random generator
    const int n = 20;
    double  arr [n];
    double sum = 0;
    for(int i = 0; i < n; i++){
        arr[i]  = -100.0 + 200.0 * rand() / (double)RAND_MAX;
    }
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    for(int i = 1; i < n; i += 2) {
        sum += arr[i];
    }
    cout << "Sum of elements with odd indexes is " << sum << endl;
}