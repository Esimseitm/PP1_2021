#include <iostream>
#include <map>

using namespace std;

int main () {
	map < string, int > aa;
	int n, m, b;
	cin >> n >> m;
	string name;
	int sum;
	int sum2 = 0;
	double percent;
	for (int i = 0; i < m; i++) {
		cin >> name >> sum;
		sum2 += sum;
		if ( aa.find(name) == aa.end()) {
			aa[name]= 0;
		}
		aa[name]= aa[name] + sum;
	}
	cin >> b;
		for (int i = 0; i < b; i++) {
		cin >> name >> sum;
		sum2 += sum;
		if ( aa.find(name) == aa.end()) {
			aa[name]= 0;
		}
		aa[name]= aa[name] + sum;
	}
	map < string, int > :: iterator it;
	for (it = aa.begin(); it != aa.end(); it++) {
		percent = (100 * (*it).second) / sum2;
		cout << (*it).first << " " << percent << endl; 
	}
	
	return 0;
}