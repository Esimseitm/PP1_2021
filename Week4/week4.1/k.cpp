#include <iostream>
using namespace std;
int main () {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            
        }
    }
    int sum=0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) 
        {
            sum += a[i][j];
        }
        cout << "The sum of row number " <<i<< " is "<< sum <<endl;
        sum = 0;
    }
    int sum2=0;
    for (int j = 1; j <= m; j++) {
        for (int i = 1; i <=n; i++) {
             sum2 += a[i][j];
        }
        cout << "The sum of column number "<<j<< " is "  << sum2 << endl;
        sum2=0;
    }
    return 0;
}