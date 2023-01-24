#include <iostream>
#include <vector>

using namespace std;

int main () {
    int n, m;
    cin >> n >> m;
    int a[n] ;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
          cin >> a[i] ;
          if (a[i] == m) {
             cnt++;
          }
    }
    cout << cnt;
    return 0;
}