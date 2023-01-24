// нам дается строка, надо вывести только цифры

#include <iostream>

using namespace std;
int main () {
    string s;
    s = "12345manarbek678910";
    for (int i=0; i < s.size(); i++) {
        if ( s[i] >= '0' && s[i] <= '9') // s[i] >= 48 
        cout << s[i];
    }
    return 0;
}