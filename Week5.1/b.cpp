#include <iostream>
#include <algorithm>

using namespace std;
int main () {
    string s;
    cin >> s;
    for (int i = 0; i < s.size() ; i++) {
        if ( s[i] >= 'a' && s[i] <= 'z') {
            cout << char(s[i] - 32);
        } else {
            cout << s[i];
        }
    }

    return 0;
}