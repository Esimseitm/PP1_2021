#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
    vector<int> a;
    int n;
    cin >> n;
    int max = -100000000, min = 10000000;
    for (int i = 0;  i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        if ( a[i] > max) {
            max = a[i];
        }
        if ( a[i] < min) {
            min = a[i];
        }
    }
    cout << max - min;
    return 0;
}