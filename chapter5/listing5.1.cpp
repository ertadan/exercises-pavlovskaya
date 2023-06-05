/**
 * Write a program that determines if the given text file contains
 *  a given sequence of characters. The length of the text does not exceed
 * 80 characters, text does not contain word hyphenation, sequence does not
 * contain whitespace characters.
 */

#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;
int main() {
  const int len = 81;
  // 1
  char word[len], line[len];
  // 2
  cout << "Введите слово для поиска: ";
  cin >> word;
  ifstream fin("text1.txt");
  // 3
  if (!fin) {
    cout << "Ошибка открытия файла." << endl;
    return 1;
  }
  // 4
  while (fin.getline(line, len)) {
    // 5
    if (strstr(line, word)) {
      cout << "Присутствует!" << endl;
      return 0;
    }
  }
  cout << "Отсутствует!" << endl;
}