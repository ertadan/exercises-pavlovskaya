/**
 * Variant 4
 *  Find sum of elements, placed between first and last negative elemets
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
    int first_neg = -1;
    int last_neg = -1;
    for(int i = 0; i < n; i++){
        if (arr[i] < 0) {
            if (first_neg == -1 && last_neg == -1 ) {
                first_neg = i;
            } else if ( first_neg != -1  && last_neg == -1 ){
                last_neg = i;
            } else {
                first_neg = last_neg;
                last_neg = i;
            }
        }
        } 
    if (last_neg - first_neg > 1){
        for(int i = first_neg; i < last_neg; ++i) {
            sum += arr[i];
        }
    }

    cout << "Sum between first element " << arr[first_neg] 
        << " and last negative " << arr[last_neg] << " elements is "
        << sum << endl;
}