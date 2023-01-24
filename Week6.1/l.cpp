#include <iostream>
using namespace std;
void manek( string s, int n ) {
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == s[i+1]) {
            cnt++;
        }
    }
    if ( cnt >= (n-1)) {
     cout << "Valid";
    } else {
        cout << "Not valid";
    }
} 
int main () {
    int n ;
    string s;
    cin >> s;
      cin >> n;
    for (int i = 0; i < s.size(); i++) {
        if ( s[i] >= 48 && s[i] <= 57 ) {
            s[i] = '*';
        }
    }
    manek(s, n);
    return 0;
}