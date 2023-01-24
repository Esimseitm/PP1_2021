#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
    vector<int> a;
    int n;
    cin >> n;
    for (int i = 0;  i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int m;
    cin >> m;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if ( a[i] == m) {
           cnt++;
            break; 
        } 
    }
    if (cnt > 0) {
        cout << "Yes";
    } else {
    cout << "No";
    }
    return 0;
}