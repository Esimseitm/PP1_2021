#include <iostream>
#include <vector>

using namespace std;

int f(vector<int> a, int m) {
    int cnt = 0;
    int cnt1 = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] >= m) {
            for (int j = 1; j <= a[i] ;  j++ ) {
                if ( a[i] % j == 0) {
                cnt++;
                }
            }
            if ( cnt == 2) {
                cnt1++;
            }
            cnt = 0;
        }
    }
    return cnt1;
}

int main (){
    vector<int> a;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int cnt1 = 0;
    int g = 0;
    int m;
    cin >> m;
    cout << f(a, m);
    return 0;
}