/**
 * Variant 13
 * Write a program which reads english text from a file and put it console
 * but changes each first letter of a words, which starts from vowel to 
 * lower case one.
 * I wanna be loved by you. -> I wanna be loved by You.
 * Using stl set<> container
*/

#include <fstream>
#include <iostream>
#include <set>
 
using namespace std;
 
int main() {
    ifstream fin("text-task.txt");
    if ( !fin ) { cout << "Ошибка открытия файла." << endl; return 1; }
    set<char> vowels = { 'a', 'e', 'i', 'o', 'u', 'y' };
    string s, str, result;
    while (getline(fin, str)) {
        str += " ";
        for (int i = 0; i < str.size(); i++) {
            s += str[i];
            if (!(isalpha(str[i]))) {
                s.pop_back();
                if (vowels.find(s[0]) != vowels.end()) {
                    s[0] = toupper(s[0]);
                }
                result += s;
                if (i != str.size() - 1) {
                    result += str[i];
                }
                s = "";
            }
        }
        cout << result << "\n";
        result = "";
    }
    fin.close();
    return 0;
}