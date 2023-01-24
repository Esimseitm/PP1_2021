#include <iostream>
#include <algorithm>

using namespace std;
int main () {
    string s, s1;
    cin >> s >> s1;
    if(s.find(s1) == string::npos ) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;
}