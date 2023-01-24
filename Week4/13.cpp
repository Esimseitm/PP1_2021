/* 5 5
1 1 1 1 1 
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
 */ 

#include <iostream>

using namespace std;

int main (){
    int n,m;
    cin >> n>> m;
    int a[n][m];
    for (int i = 0 ; i < n; i++) 
    {
        for (int j=0; j < n; j++) {
            a[i][j] = i +1;

        }
    }
    for (int i=0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";

        }
        cout << endl;
    }
    return 0;
}