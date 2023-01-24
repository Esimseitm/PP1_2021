#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    int a[n][n];
    char b(46);
    int m = 1;
    for (int i =0; i < n; i++) 
    {
        for (int j =0; j < n; j++) {
            if (i + j == n - 1) {
                a[i][j] = m;
                m++;
            } else {
                a[i][j] = b;
            }
        
        }
    }
    for (int i = 0; i < n;i++ ) 
    {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 46) {
                cout << b;
            } else {
            cout << a[i][j];
            }
        }
        cout << endl;
    } 
    return 0;
} 