#include <bits/stdc++.h>

using namespace std;

int main () {
    int a, b, n;
    int sum1= 0;
    cin >>a >> b >> n;
    a = a * n;
    b = b * n;
    sum1 = a * 100 + b;
    a = sum1 / 100;
    b = sum1 % 100;
    cout << a << " " << b;



    return 0;
}