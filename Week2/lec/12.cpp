#include <iostream>

using namespace std;

int main () {
      /* int a, b;
    cin >>a>>b;
    while ( a > b) {   // разница  while and do while.   Вхиле сразу условие потом числа, До вхиле сначала числа, потом условие
        cout << a;
        a--;
    }  */ 
    int a, b;
    cin >>a>>b;
    do {
        cout << a;
        a--;
    } while ( a > b) ;
    return 0;
}