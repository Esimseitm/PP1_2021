#include <iostream>

using namespace std;

long long f(long long sum) {
    int a;
    cin >> a;
    sum += a;
    if ( a == 0) {
        return sum;
    }
    else {
        return f(sum);
    }
}

int main () {
    cout << f(0);
    return 0;
    
}