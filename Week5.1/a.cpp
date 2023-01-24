#include <iostream>
#include <algorithm>

using namespace std;
int main () {
    string s;
    cin >> s;
    int cnt = 0, cnt1=0;
    for (int i = 0; i < s.size() ; i++) {
        if (s[i] >= 'a' && s[i] <= 'z' ) {
            cnt++;
        }
        if ( s[i] >= 'A' && s[i] <= 'Z') {
            cnt1++;
        }
    }
     cout << cnt << " " << cnt1;
    return 0;
}