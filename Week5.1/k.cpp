#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    string s;
    cin >> s;
    int cnt=0;
    for (int i = 0; i < s.size() ; i++) {
        if ( int(s[i]) == 97 ) cnt++;
        if ( int(s[i]) == 101 ) cnt++;
        if ( int(s[i]) == 105 ) cnt++;
        if ( int(s[i]) == 111 ) cnt++;
        if ( int(s[i]) == 117 ) cnt++;
    }
    cout << cnt << " ";
    return 0;
}