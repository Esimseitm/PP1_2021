// Даны две строки s и t, проверьте эти две строки на равенство.

#include <iostream>

using namespace std;

int main () {
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == s2) {
        cout << "YES" ;
    } else {
        cout << "NO";
    }
    return 0;
}