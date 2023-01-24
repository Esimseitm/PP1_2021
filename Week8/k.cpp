#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
    vector<int> a;
    int n ;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int m;
    cin >> m;
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    int sum = 0;
    for (int i = 0; i < m; i++) {
           sum += a[i];
    }
    cout << sum;
    return 0;
}
