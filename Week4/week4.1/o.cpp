#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int c=0;
    int v =0;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int max = -1000000;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i==j) {
                if ( a[i][j] > max) {
                    max = a[i][j];
                    c = i+1;
                    v = j+1;
                }
            }
        }
    }
    cout << "Maximum element is: "<< max << " with ";
    cout << "coordinates: "<<c<<";"<<v;
    
    return 0;

}