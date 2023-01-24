#include <iostream>
#include <set>

using namespace std;

int main () {
    set<string> a;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        a.insert(s[i]);
    }
    cout << a.size() << endl;
    set<string> :: iterator it;
    for (it = a.begin(); it != a.end(); it++) {
        cout << *it << " ";
    }
    return 0;   
}