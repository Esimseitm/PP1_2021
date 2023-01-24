#include <iostream>

using namespace std;

int main (){
    /*int a;
    cin >>a;
    cout << (1 << a);*/
    int a, b;
    cin >> a;
    b = a - 1;
    bool ok = ( a & b == 0);
    cout << ok;
    return 0;
}