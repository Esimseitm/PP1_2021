#include <bits/stdc++.h>

using namespace std;

int main () {
    vector < int > a;
    for (int i = 0; i < 10; i++) {
        a.push_back(i);
    }
    rotate(a.begin(), a.begin() + 4, a.end());
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    return 0;
}