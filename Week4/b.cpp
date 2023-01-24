#include <bits/stdc++.h>

using namespace std; 

int main () {
    int n;
    cin >> n;
    int a[n][n];
    int max = -100000;
    int m = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cin >> a[i][j];
            if (a[i][j] > max) {
                max = a[i][j];
            }
            if (a[0][0]== a[i][j]) {
                m++;
            }
        }
    }
    int max2= a[0][0];
    if ( m== n * n) {
        cout << "0";
    } else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if(a[i][j]>max2 && a[i][j] != max)
                max2=a[i][j];
            }
        }
        cout << max2;
    }
  return 0;
}