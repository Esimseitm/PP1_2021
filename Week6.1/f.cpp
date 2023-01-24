#include <iostream>
using namespace std;

void calc(string s, int n) {
    int cnt = 0;
    for (int i = 0; i < s.size() ; i++) {
        if ( (int(s[i]) >= 48) && (int(s[i] <= 57))) {
             cnt ++;
        }
    }
    if ( cnt >= n)
        cout << "YES";
        else cout << "NO";
}
int main () {
    int n;
    string s;
    cin >> s >> n;
    calc(s, n);
    return 0;
}