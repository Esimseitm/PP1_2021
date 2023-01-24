#include <iostream>

using namespace std;

int main(){
    int n, m, a, b;
    cin >> n >> m ;
    m = m / 100 + m % 10;
    cout << m + n << endl;
    return 0;
}