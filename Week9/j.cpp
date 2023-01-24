#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main () {
    map <string, int> a;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        int m;
        cin >> s >> m;
        if ( a[s] >= 0) {
            a[s] += m;
        } else {
           a[s] = m;
        }
    }

    map<string, int> :: iterator it;
    for (it = a.begin(); it != a.end(); it++) {
        cout << (*it).first << " " << (*it).second << endl;
    } 
    return 0;
}