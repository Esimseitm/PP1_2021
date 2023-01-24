#include <iostream>
#include <cmath>

using namespace std;

int manek(int n) {
    n = abs(n);
    return n;
}
int main () {
    int n;
    cin >> n;
    cout << manek(n);
    return 0;
}