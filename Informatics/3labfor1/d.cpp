#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int sum = 0;
    for (int i = a; i > 0; ) {
        if ( i % 10 == b) {
             sum += 1;
        }
        i = i /10;
    }
    cout << sum;
    return 0;
}