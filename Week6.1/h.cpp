#include <iostream>
using namespace std;

void manek(string s) {
    int cnt = 0;
    for (int i = 0; i < s.size(); i++ ) {
        if ( s[i] % 2 == 0) {
          cnt++;
        }
    }
    if ( cnt == s.size()) cout << "Valid";
    else cout << "Not valid";
}

int main () {
    string s;
    cin >> s;
    manek(s);
    return 0;
}