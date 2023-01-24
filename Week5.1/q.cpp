#include <iostream>

using namespace std;
int main () {
    string s, s1, s2;
    cin >> s >> s1;
    int a = 0, b= 0;
    if (s1.find(s) == string::npos) cout << "NO";
    else {
        a = s1.size();
        b = s.size();
        for (int i = 0; i < (a / b) ; i++) {
            s2 += s;
        }
        if ( s2 == s1) cout << "YES";
        else cout << "NO";
    }   

    return 0;
}