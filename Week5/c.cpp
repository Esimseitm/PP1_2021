// Вам даны строки s и t, вам нужно проверить, является ли строка t подстрокой строки s.

#include <iostream>

using namespace std;

int main () {
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.find(s2)== string::npos) {
        cout <<"NO";
    } else {
        cout << "YES";
    }
    return 0;
}