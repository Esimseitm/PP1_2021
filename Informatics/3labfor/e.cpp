#include <bits/stdc++.h>

using namespace std;

int main () {
    double a, b;
    cin >> a>> b;
    double sum = 0;
    double m = 0;
    for (int i = 0; i <= b; i++) {
        m =  pow(a,i);
        sum += m;
    }
    cout << sum;
    return 0;

}