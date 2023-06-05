/**
 * Example of usage cstring functions strlen() to determine
 * string length and strcpy() to copy string
*/
#include <iostream>
#include <cstring>


using namespace std;

int main() {
    int m = 20;
    char a[100] = "Never trouble trouble";
    char *p = new char[m];
    // strcpy(p, a);
    strncpy(p, a, strlen(a) + 1);
    printf("%s",p);
    //strlen(a);
    delete [] p;
}