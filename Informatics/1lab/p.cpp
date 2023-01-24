#include <iostream>

using namespace std;

int main () {
    int a, b, c, m, n, k;
    cin >> a >> b >> c >> m >> n >> k;
    int sum = 0;
    int sum2= 0;
    sum = a * 3600 + b * 60 + c;
    sum2= m * 3600 + n * 60 + k;
    a = sum2 - sum;
    cout << a;
    return 0;
}