#include <bits/stdc++.h>

using namespace std;

void manek(string s) {
	for (int i = 0; i < s.size(); i++) {
        if ( s[i] >= 97) {
		if ( ( i % 2 == 0)  || (i == 0)) {
			s[i] = char((int(s[i]) - 32));
		}
        }
		cout << s[i] ;
	}
}
int main () {
	string s;
	getline (cin, s); 
	manek(s);
	return 0;
}