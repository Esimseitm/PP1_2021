#include <iostream>
#include <map>
#include <algorithm>

using namespace std;


int main () {
	map < string, string> aa;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		string ss;
		getline(cin , ss);
         aa[s] += ss;
         
	} 
	sort(aa.begin(), aa.end());
	map < string,string> :: iterator it;
	for ( it = aa.begin(); it != aa.end(); it++ ) {
		cout << (*it).first << " " << (*it).second << endl;
	}
	return 0;
}