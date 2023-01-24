#include <bits/stdc++.h>

using namespace std;

int main () {
    double a;
    cin >> a;
    double b = 0;
    double sum = 0;
    for ( int i = 1; i <= a; i++) {
       b = pow(2,i);
       sum = b; 
    }
    cout << sum;
    
    return 0;
}