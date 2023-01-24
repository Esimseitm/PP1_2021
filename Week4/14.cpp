/* 5
1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/ 

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >>n;
    int a[n][n];
    for (int i =0; i < n; i++) {
        for (int j = 0; j<= i; j++) {
            a[i][j] = j +1;
        }
    }
    for (int i =0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;

    }
    return 0;
}