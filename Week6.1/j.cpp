#include <iostream>
using namespace std;

void manek(int a[]) {
    int max = -10000000;
    for (int i = 0; i < 4; i++ ) {
        cin >> a[i];
        if ( a[i] > max) max = a[i];
    }
    cout << max;
    
}
int main () {
    int a[4];
    manek(a);
    return 0;
}