// таблица умножений
#include <bits/stdc++.h>
using namespace std;
int main () {
    for (int i = 0; i < 9; i++) {
        for( int j = 0; j < 9; j++) {
            cout.width(3);
            cout << i * j << " ";
        }
        cout << "\n";
    }
    return 0;
}

