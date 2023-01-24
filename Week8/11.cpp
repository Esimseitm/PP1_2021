// 7
// abs
//def
// abc
// def
// kkk
// ll
// kkk

// abc = 2
// def = 2
// kkk = 2
// ll = 1
#include <iostream>
#include <map>

using namespace std;

 map<string , int> a;

int main () {
    string s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if ( a.find(s) == a.end()) {
            a[s] = 0;        }
        a[s] += 1;
    }

    map<string, int> :: iterator it;
    for (it = a.begin(); it != a.end(); it++) {
        cout << (*it).first << " " << (*it).second << endl;
    }
    return 0;
}