#include <iostream>

using namespace std;

int main () {
    int a;
    cin >> a;
    int b = 1; 
    int sum = 0;
    for ( int i = 1; i <= a; i++) {
     b = b * i;
     
    }
    cout << b;
    return 0;
}