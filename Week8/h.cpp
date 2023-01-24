#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
    vector<int> a;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int m;
    cin >> m;
    sort(a.begin(), a.end());
    for (int i = 0; i < m; i++) {
       cout << a[i] << " ";
    }
    return 0;
}