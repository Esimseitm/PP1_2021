// нужно посчитать число делителей числа n
/*
#include <iostream>

using namespace std;

int main () {
    int n, cnt = 0;
    cin >>n;
    for (int i = 1; i <= n ; i++){
        if (n % i == 0)
        cnt++;
    }
    cout << cnt;
    return 0;
}   */ 

// задача на простое число или нет 

#include <iostream>

using namespace std;

int main () {
    int n, cnt = 0;
    cin >>n;
    for (int i = 1; i <= n ; i++){
        if (n % i == 0)
        cnt++;
    }
    if ( cnt == 2) 
    cout <<"Yes";
    else 
    cout <<"No";
    return 0;
}   