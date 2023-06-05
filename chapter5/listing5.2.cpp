/**
 * Write a program that determines how many times a given word occurs
 * in a text file, the line length of which does not exceed 80 characters
 * The text is notkeeps hyphenation.
 */

#include <cctype>   // 1
#include <cstring>  // 1
#include <fstream>  // 1
#include <iostream> // 1

using namespace std; // 1

int main() { // 1
  const int len = 81; // 1
  char word[len], line[len]; // 1
  cout << " Введите слово для поиска: "; // 1
  cin >> word;  // 1
  int l_word = strlen(word);  // 1
  ifstream fin("text.txt");  // 1 
  if (!fin) {  // 1
    cout << "Ошибка открытия файла." << endl;  // 1
    return 1;  // 1
  }  // 1
  int count = 0;  // 3
  while (fin.getline(line, len)) {   /// 2
    // контрольный вывод (убрать перед шагом 3)
    cout << line << endl; /// 2
    char *p = line;  // 3
    while (p = strstr(p, word)) { // 3
      cout << " совпадение: " << p << endl; // контрольный вывод // 3
      char *c = p;  // 4
      p += l_word;  // 3
      if (c != line) // 4
        // слово не в начале строки?
        // символ перед словом не разделитель?
        if (!ispunct(*(c - 1)) && !isspace(*(c - 1))) //4
          continue; //4
      // символ после слова разделитель?
      if (ispunct(*p) || isspace(*p) || (*p == '\0')) //4
        count++; //3
    } //3
  } //2 
  cout << "Количество вхождений слова: " << count << endl; //3
} //1