#include <iostream>
using namespace std;

void manek(string s) {
    for (int i = 0; i < s.size(); i++) {
        string s1("aeiouAEIOU");
        for (int i = 0; i < s.size() ; i++) {
            for (int j = 0; j < s1.size(); j++) {
                if (s[i] == s1[j]) {
                    s[i] = '*';
                }
            }
        }
    }
    for (int i = 0; i < s.size(); i++) {
        if ( s[i] != '*') {
           cout << s[i];
        }
    }
}

int main () {
    string s;
    getline(cin, s);
    manek(s);
    return 0;
}