#include <iostream>

using namespace std;

int main () {
    /*int a, b;
    cin >> a >>b;
    if ( a < b) {
        cout << a;
    } else {
        cout << b;
    }*/ 


    /*int a, b, c;
    cin >> a >> b >> c;
    if (a < b && a < c) {
        cout << a;
    } else if (b < a && b < c){
        cout << b;
    } else {
        cout << c;
    } // в данном случае если из 3 чисел будут одинаковые числа, то он не сможет посчитать. Поэтому нужно добавить меньше или равно <=
    return 0;*/

    int a, b, c;
    cin >>a>>b>>c;
    if (a <=b && a <= c) {
        cout << a;
    } else if (b <= a && b <= c) {
        cout << b;
    } else {
        cout << c;
    }
}