#include <iostream>
using namespace std;
int main() {
    int n,count = 0;
    cin>>n;
    for (int i = 0; i < n; i++){
        int m;
        cin>>m;
        while (m > 0){
            if (m % 10 == 0){// 100 %10=0;
            count++;
            }
            m/=10;
        
        }
        
    }
    cout<<count;
}