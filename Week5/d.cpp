// Вам дана строка s, которую нужно вывести, является этот строковый палиндром или нет.

#include <iostream>
#include <algorithm>


using namespace std;

int main () {
    string s;
    cin >> s;
    string n = s;
    reverse(s.begin(), s.end());

    if (s == n) {
        cout <<"YES";
    } else {
        cout <<"NO";
    }

    return 0;
}