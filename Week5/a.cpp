//Вам задана строка s, в строке нужно вывести количество заглавных и строчных букв.

#include <iostream>

using namespace std;

int main () {
    string s;
    cin >> s;
    int a=0; 
    int b= 0;
    for (int i = 0; i < s.size(); i++ ) {
        if ( (s[i] >= 'A') && (s[i] <= 'Z') ) {
            b++;
        } else {
            a++;
        }

    }
    cout << a << " " << b;
    return 0;
}