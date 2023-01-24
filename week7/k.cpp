#include <iostream>

using namespace std;

int f( string s, int n,int max) {
    if ( n == s.size()) {
        return max;
    }
    if ( s[n] - '0' > max) {
        max = s[n] - '0';
    }
        return f(s, n + 1, max);
}

int main () {
    string s;
    cin >> s;
    cout << f(s, 0, 0);
    return 0;
}