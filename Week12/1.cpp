#include <iostream>
#include <map>

using namespace std;

int main () {
    map < string , int> a;
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        a[s] = a[s] + 1;
    }
    map<string, int> :: iterator it;
    for (it = a.begin(); it != a.end(); it++) {
        cout << (*it).first << "-" << (*it).second << endl;
    } 
    return 0;
}