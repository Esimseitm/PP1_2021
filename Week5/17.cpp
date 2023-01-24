// s=> palindrome

#include <iostream>
#include <algorithm>

using namespace std;

int main (){
    string s;
    cin >> s;
    string s_old = s;
    reverse(s.begin(), s.end());

    if (s == s_old) {
        cout << "Yes";
    } else {
        cout << "No" ;
    }
    return 0;
}
