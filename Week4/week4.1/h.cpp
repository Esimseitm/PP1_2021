#include <iostream>
using namespace std;
int main () {
    int n,m;
    cin >>n >> m;
    int a[n][m];
    int sum=0;
    int min = 100000;
    int c = 0;
    for (int i =0; i < n; i++) {
        for (int j = 0; j < m ; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += a[i][j];
        }
        if ( sum < min) 
        {
            min = sum;
            c = i;
        }
        sum = 0;
    }
    cout << c +1;
     return 0;
}