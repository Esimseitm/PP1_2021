#include <iostream>
using namespace std;

void calc(int n) {
    int sum = 0;
    int m = 0;
    for (int i = n; i > 0; i= i/ 10) {
        m = i % 10;
        sum += m;
        m = 0;
    }
    cout << sum;
}
s
int main () {
    int n;
    cin >> n;
    calc(n);
    return 0;
}