// создаем матрицу такоого вида
// 1 2 2
// 3 1 2
// 3 3 1

#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++ ) 
        {
            if ( i==j) a[i][j] = 1;
            if (i < j) a[i][j] = 2;
            if (i > j) a[i][j] = 3;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
        cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}