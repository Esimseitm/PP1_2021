#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, m, g, sum = 0;
    cin >> n >> m;
    g = m % 10;
    sum += g;
    g = 0;
    g = m / 100;
    sum += g;
    sum += n;
    cout << sum;
    
    
    return 0;

}