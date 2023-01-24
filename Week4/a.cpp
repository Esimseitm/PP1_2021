//Дан двумерный массив n x n. Найдите наибольшее число в массиве.
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >>n;
    int a[n][n];
    int max = 0;
    for (int i =0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j] ;
        }
    }
     for (int i = 0; i < n; i++) {
         for (int j = 0; j < n; j++) {
             if ( a[i][j] > max ) {
                 max = a[i][j];
             }
         }
     }
     cout << max;
    return 0;
}