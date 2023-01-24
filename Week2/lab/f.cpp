// В этой задаче вы должны найти сумму всех чисел от 1 до n.
#include <iostream>
using namespace std;
int main () {
        int a, b;
        b = 0;
        cin >> a;
        for ( int i = 1; i <= a; ++i) {
            b = b + i;
        } 
        cout << b;
    return 0;
}