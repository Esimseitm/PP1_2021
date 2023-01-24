#include <iostream>

using namespace std;

int main(){
    int n, m;
	int a[10000];
    cin >> n >> m;
    int sum = 0;
    for (int i = 0; i <  n; i++) {
        cin >> a[i];
        if ( a[i] <= m) {
            sum++;
        }
        
    }
    cout << sum;
    return 0;
}
