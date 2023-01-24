#include <iostream>

using namespace std;

int main () {
    int a, b, c;
    cin >>a >> b >> c;
    cout << max (c, max (a, b));
    //cout << max (a, b); // naxodit max chislo iz 2 chisel //искать макс больше 2 чисел нельзя, но можно использовать другой метод с Макс внутри макс.
    return 0;
}