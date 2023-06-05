/**
 * Write a program which reads text from file and print out
 * only questions from that text
*/
#include <fstream>
#include <iostream>
#include <cstdio>

using namespace std;

int main () {
    ifstream fin ("text2.txt");
    if ( !fin ) {cout << "Ошибка открытия файла." << endl; return 1;}
    fin.seekg(0, ios::end);
    long len = fin.tellg();
    char *buf = new char[len + 1];
    fin.seekg(0, ios::beg);
    fin.read( buf, len);
    buf[len] = '\0'; long n = 0, i = 0;
    while( buf[i] ) {
        if ( buf [i] == '?') {
            for(int j = n; j <= i; j++) {
                cout << buf[j];
            }
            n = i + 1;
        }
        if (buf[i] == '.' || buf[i] == '!' ) n = i + 1;
        i++;
    }
    fin.close();
    delete [] buf;
}