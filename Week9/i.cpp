#include <iostream>
#include <map>
#include <vector>
#include <set>

using namespace std;

int main () {
    set<string> st;
    vector<string> aa;
    int n, cnt = 0;
    cin >> n;
    for (int i = 0;  i< n; i++) {
        string s;
        cin >> s;
        st.insert(s);

        set<string> :: iterator it;
        int a = 0;
        for (it = st.begin(); it != st.end(); it++) {
            a++;
        }

        if (a != cnt) {
             aa.push_back("new user added");
        } else {
            aa.push_back("user already exists");
        }
        cnt = a;
    }
    for (int i = 0;  i< aa.size(); i++) {
        cout <<aa[i] << endl;
    }



    return 0;

}