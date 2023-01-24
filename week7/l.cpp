// Вам дана строка. Проверь, палиндром это или нет?
#include <iostream>

using namespace std;

bool f(string s, int n) {
    if ( n < 0) {
        return true;
    }
    if (s[n] != s[s.size() -n -1]) {
        return false;
    }
        return f(s, n - 1);

}

int main () {
    string s;
    cin >> s;
    if (f(s, s.size() - 1)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}