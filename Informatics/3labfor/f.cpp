#include <bits/stdc++.h>

using namespace std;

int main () {
    double n;
    cin >> n;
    double sum = 0;
    double a = 0;
    for (int i = 1; i <= n; i++) {
        a = 1/(pow(i,2));
        sum += a;
    }
    cout << sum ;
    return 0;
}