#include <iostream>
#include <cmath>

using namespace std;


long long f ( long long n) {
     for (int i = 0; i <= n; i++) {
         cout << pow(i,i) << " ";
     }
}

int main () {
    int n;
    cin >> n;
    f(n);
    return 0;
}