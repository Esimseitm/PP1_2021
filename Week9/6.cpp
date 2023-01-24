// (((((((()))((())))))))
// проверка на пару 

#include <iostream>
#include <stack>

using namespace std;

int main () {
    string s;
    bool prov = true;
    int k = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
        k += 1;
        }
        else {
            k -= 1;
        }
        if ( k < 0) {
            prov = false;
            break;
        }
    
    }
    if ( k != 0) {
        prov = false;
    }
    if (prov) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}