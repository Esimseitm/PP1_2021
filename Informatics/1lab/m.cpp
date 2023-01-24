#include <bits/stdc++.h>

using namespace std;

int main () {
    int a, b;
    int sum = 0;
    cin >> a >> b;
    sum = a + b;
    a = sum - a;
    b = sum - b;
    cout << a << " " << b;
    return 0;
}
