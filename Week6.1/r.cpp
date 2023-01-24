#include <bits/stdc++.h>

using namespace std;

void manek(string s) {
    s[0] = toupper(s[0]);
    cout << s[0];
}

int main () {
    string s;
    cin >> s;
    manek(s);
    return 0;
}