#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; ++i){
        int j = sqrt(i);
        if( j * j  == i )
            cout << i << " ";
    }
    return 0;
}