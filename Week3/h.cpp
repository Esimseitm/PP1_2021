// l ⩽ i ⩽ r
// мы посчитали сумму чисел от л до р 
#include <iostream>
using namespace std;
int main () {
    int n,l,r, x =0;
    cin>>n>>l>>r;
    int arr[100000];
    for ( int i=0; i<n; i++) {
        cin >> arr[i];
        if (i >=l-1 and i<=r-1){
            x+=arr[i];
        }
    }
    cout<<x;
}