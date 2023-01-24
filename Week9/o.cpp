#include <iostream>
#include <set>
#include <map>

using namespace std;

int main () {
    int n;
    cin >> n;
    map <string, string> aa;
    set <string> ss;
    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        aa[a]= b;
        ss.insert(a);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        string a, b;
        cin >> a >> b;
        if ( ss.find(a) == ss.end() ) {
            cout <<"login error" << endl;
        } else if(aa[a] != b) {
            cout << "password error" << endl;
        } else { 
            cout << "correct password" << endl;
        }
    }
    return 0;
}