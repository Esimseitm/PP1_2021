//Дан двумерный массив размером n x m (n строк, m столбцов). Напишите программу, которая выводит количество
//отрицательных чисел в массиве.

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin >>n>> m;
    int a[n][m];
    int cnt = 0;
    for (int i = 0; i < n ; i++) 
    {
        for (int j =0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            if (a[i][j] < 0) {
                cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}