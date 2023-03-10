#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


bool f(string s1, string s2) {
     if (s1.size() < s2.size()) {
         return true;
     }
     if (s1.size() > s2.size()) {
         return false;
     }
     return (s1 < s2);
}

int main () {
    vector<string> a;
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
         cin >> s;
         a.push_back(s);
    }
    sort(a.begin(), a.end(), f);

    for (int i =0; i < n; i++) {
        cout << a[i] << endl;
    }
    return 0;
}