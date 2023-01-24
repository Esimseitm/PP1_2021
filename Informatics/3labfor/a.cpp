#include <iostream>

using namespace std;

int main () {
    int a;
    cin >> a;
    int b = 0;
    long sum = 0;
    for (int i=1; i <= a ; i++) {
         b = i * i;
         sum += b;
         b = 0;
    }
    cout << sum;
    return 0;
} 