// найти сумму чисел в массиве
#include <iostream>

using namespace std;

int sum(int a[], int n) {
    int res = 0;

    for (int i = 0; i < n ; i++) {
        res += a[i]; 
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i= 0; i < n ; i++) {
        cin >> a[i];

    }
    cout << sum(a,n) << endl;
    return 0;
}