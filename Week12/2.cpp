#include <iostream>
#include <map>

using namespace std;

int main () {
	int n;
	cin >> n;
    string login, pass;
	map < string , string > aa;
	for (int i = 0; i < n; i++) {
		cin >> login >> pass;
		aa[login]= pass;
	}
	int m;
	cin >> m;
	int log, pas;
	for (int i = 0; i< m ; i++) {
		cin >> log >> pas;
        login = log;
		if ( aa.find(login) != aa.end()) {
			if ( aa[login] == pas) {
				cout << "correct password";
			} else if (aa[login] != pas ) {
				cout << "password error";
			}
		} else {
			cout << "login error";
		}
	}
	return 0;
}