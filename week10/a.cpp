#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int main () {
    vector < string > a;
    vector < int > b;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        int m;
        cin >> s >> m;
        a.push_back(s);
        b.push_back(m);
    }
    sort(a, a + n );
    sort(b.begin(), b.end());
    map < string, int> aa;
    for (int i = 0; i <n; i++) {
        aa[a[i]] = b[i];
    }
    map <string, int> :: iterator it;
    for (it = aa.begin(); it != aa.end(); it++) {
        cout << (*it).first << " " << (*it).second << endl;
    }
    return 0;
}