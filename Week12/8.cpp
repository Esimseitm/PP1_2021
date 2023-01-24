#include <bits/stdc++.h>

using namespace std;

int  main () {
    int a[3] = {2 , 3 , 1} ;
    do {
        for (int i = 0; i < 3; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    } while (next_permutation(a, a+3));
    return  0;
}