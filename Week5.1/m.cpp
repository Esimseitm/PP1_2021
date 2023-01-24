#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    string s, s2;
    int a;
    cin >> s >> s2 >> a;
    int pos = 0;
    int cnt = 0;
    while (s.find(s2, pos) != string::npos) {
        int index = s.find(s2, pos);
        cnt++;
        pos = index +1;
    }
    if ( cnt == a) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}