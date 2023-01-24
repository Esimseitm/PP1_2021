// Write a program that generates triangle made of [*].

#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    cin >> n;
    int a[n][n];
    char m(42);
    char l(32);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++ ) 
        {
            if ( i==j) a[i][j] = m;
            if (i < j) a[i][j] = l;
            if (i > j) a[i][j] = m;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            if(a[i][j] == 42) {
                cout << "["<<m<<"]" << " ";
            }
            if (a[i][j] == 32) {
                cout << l;
            }
            
        }
        cout << endl;
    }

    return 0;
}