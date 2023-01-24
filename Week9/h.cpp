#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main () {
    int n;
    cin >> n;
    map<string, int> a;
    for (int i = 0;  i< n; i++) {
        string s;
        cin >> s;
        if (a[s] < 1 ) {
            a[s] = i + 1;
        }
    }

    map<string, int> :: iterator it;
    for (it = a.begin(); it != a.end(); it++) {
        cout << (*it).first << " " << (*it).second << endl;
    }
     return 0;
}