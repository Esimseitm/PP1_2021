#include <iostream>
using namespace std;
int main () {
    string s, s1;
    cin >> s >> s1;
    if ( s.size() != s1.size() ) {
        cout << "NO";
    }
    else {
        int a[26]={0}, b[26]={0};
        for (int i =0; i < s.size() ; i++ ) {
            a[int(a[i]) - 97]++;
            b[int(b[i]) - 97]++;
        }
        for (int i=0; i < 26; i++) {
            if (a[i] != b[i]) {
                cout << "NO";
            }
        }
        cout << "YES";
    }
    return 0;

}