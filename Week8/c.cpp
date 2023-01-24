#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
    vector<int> s;
    int n;
    cin >>n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.push_back(x);
    }
    int a, b;
    cin >> a >> b;
    reverse(s.begin()+a, s.begin() + b + 1 );
    for (int i = 0; i < n; i++) {
        cout << s[i] << " ";
    }
    

    return 0;
}