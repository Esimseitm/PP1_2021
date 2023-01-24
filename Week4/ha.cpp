#include <iostream>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr [n];
    for (int i=0; i<n; i++){
        int cnt = 0;
        for (int j=0; j<m; j++){
        int s;
        cin>>s;
        cnt = cnt + s;

        }
        arr [i] = cnt;
    }
    int min = arr[0], k =0;
    for (int i=0; i<n; i++){
        if (arr[i]<min) {min = arr[i];
        k = i;}

    }

    cout<<k+1;
}