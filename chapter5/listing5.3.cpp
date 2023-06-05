/**
 * Write a program that determines how many times a given word occurs
 * in a text file, the line length of which does not exceed 80 characters
 * The text is notkeeps hyphenation.
 * using strtok() and strcmp() functions
 */
#include <fstream>
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const int len = 81;
    char word[len], line[len];
    char delims[] = ",.!? /<>|)(*:;\"";
    cout << "Введите слово для поиска: "; cin >> word;
    ifstream fin( "text.txt" );
    if ( !fin ) { cout << "Ошибка открытия файла." << endl; return 1; }
    int count = 0;
    while ( fin.getline( line, len ) ) {
        char *token = strtok( line, delims );
        while( token != NULL ) {
            if ( !strcmp ( token, word ) )count++;
            token = strtok( NULL, delims );
        }
    }
    cout << "Количество вхождений слова: " << count << endl;
}