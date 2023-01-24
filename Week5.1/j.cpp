#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    string s, a, b;
    cin >> s;
    a = s +s[0];
    b = a;
    reverse(a.begin(), a.end());
    if ( b == a) {
        cout << "YES\n";
    } else {
        cout << "NO\n" << endl;
    }

    return 0;
}