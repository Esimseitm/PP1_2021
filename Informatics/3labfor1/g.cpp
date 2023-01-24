#include <iostream>
using namespace std;
int main () {
    int a;
    cin >> a;
    int max = 3000000;
    int b = 0;
    for (int i = a; i > 1; i--) {
        if ( a % i == 0) {
         b = i;
         if( b < max) {
             max = b;
         }
        }
    }
    cout << max;
    return 0;
}