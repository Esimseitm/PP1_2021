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
    a.erase(a.begin() + m);
    for (int i = 0;  i< a.size(); i++) {
        cout << a[i] << " ";
    }
    
    
    
    
    /* for (int i = 0; i < n; i++) {
        if ( i == m) {
            continue;
        } else {
        cout << a[i] << " ";
        }
    } */ 
    return 0;
}