#include <bits/stdc++.h>

using namespace std;

int main () {
    string a, b;
    cin >> a >> b;
    if (a.size() != b.size()) {
        cout << "NO";
    } else {
        int g[26]={0},h[26]={0};
        for (int i = 0;  i < a.size(); i++) {
            g[int(a[i])-97]++;
            h[int(b[i])-97]++;
        }
        for(int i=0; i < 26; i++) {
            if(g[i] != h[i]) {
                cout << "NO";
                return 0;
            }
        }
        cout <<"YES";
    }

    return 0;
}