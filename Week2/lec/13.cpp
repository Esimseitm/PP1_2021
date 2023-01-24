// Задача: Вывести все числа которые делятся на 3 в промежутке от "а" до "б"
#include <iostream>

using namespace std;

int main () {
    int a, b;
    cin >>a>>b;
    for ( int i= a; i <= b; i++) {
        if ( i % 3 == 0)
        cout << i << endl;
    }
    return 0;
}