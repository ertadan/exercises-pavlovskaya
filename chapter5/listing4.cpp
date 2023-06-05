/**
 * Example of input single chars using cin.get() method.
*/
#include <iostream>

using namespace std;

int main() {
    char c, d, e;
    // cin >> c >> d >> e;
    c = cin.get(); cin.get(d); cin.get(e);
    cout << c << d << e << endl;
}