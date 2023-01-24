#include <iostream>

using namespace std;
int main () {
    int a;
    cin >> a;
    int i = 0;
    while ( i < a) {
        cout << i << " ";
        i++;
        if ( i==a) {
            break;
        }
    } 
    return 0;
}