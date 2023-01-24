#include <iostream>
#include <stack>

using namespace std;

stack<char> st;
int main () {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            st.push(s[i]);
        } else {
            if (st.empty()) {
                cout << "NO";
                return 0;
            }
            st.pop();
        }
    }

    if (st.empty()) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}