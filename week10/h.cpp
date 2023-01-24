#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    int n;
    cin >>n;
    int a[n];
    for (int i = 1;  i<= n; i++) {
        cin >> a[i] ;
    }
    bool ok = next_permutation(a, a+n);
    cout << ok << endl;
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    return 0;

}