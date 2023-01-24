#include <iostream>
#include <map>

using namespace std;

int main () {
    map<string, int> a;
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n;i++) {
        cin >> s;
        if (a.find(s) == a.end()) {
            a[s] = 0;
        }
        a[s] += 1;
    }
    int cnt = 0;
    map<string, int> :: iterator it;
    for ( it = a.begin(); it != a.end(); it++) {
        if ( (*it).second == 3) {
           cnt += 1;
        }
    }
    cout << cnt;

    return 0;
}