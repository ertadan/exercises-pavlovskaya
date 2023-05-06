/**
 * Quick sort algorithm (non-recursive)
*/
#include <iostream>
#include <cmath>
using namespace std;

int main () {
    const int n = 20;
    float arr[n];
    int *stackl = new int[n], *stackr = new int [n];
    cout << "Введите элементы массива:";
    for(int i = 0; i < n; i++) cin >> arr[i];
    //sorting
    int sp = 1;
    stackl[sp] = 0;
    stackr[sp] = n-1;
    while( sp > 0 ) {
        int left = stackl[sp];
        int right = stackr[sp];
        sp--;
        while(left < right){
            // separation {arr[left] ..arr[right]}
            int i = left, j = right;
            float middle = arr[(left + right) / 2];
            while (i < j) {
                while(arr[i] < middle) i++;
                while(middle < arr[j]) j--;
                if (i <= j){
                    float temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    i++;
                    j--;
                }
            }
            if (i < right) {
                sp++;
                stackl[sp] = i;
                stackr[sp] = right;
            }
            right = j;
        }
    }
    for(int i = 0; i < n ; i++) cout << arr[i] << " ";
    cout << endl;

    delete [] stackl;
    delete [] stackr;
}