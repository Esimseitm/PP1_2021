#include <bits/stdc++.h>

using namespace std;

int main () {
    double n;
    cin >> n;
    double b = 0;
    double c = 0;
    double sum = 1;
    for (int i = 1; i <= n; i++) {
     b = pow(-1,i);
     c = b / (2*i+1);
     sum += c;

    }
    sum = 4 * sum;
    cout << sum;
    return 0;
}