#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main () {
    set<int> a;
    int n ;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.insert(x);
    }
    int sum = 0;
    set<int> :: iterator it;
    for (it = a.begin(); it != a.end(); it++) {
        sum += (*it);
    }

    cout << sum;
    return 0;
}
