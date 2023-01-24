// опять работаем с текстовыми доками
// нам нужно определить сколько слов находиться в 1 доки, и дать ответ 2 доку 

#include <iostream>

using namespace std;

int main () {
    freopen("input.txt", "r", stdin); // read
    freopen("output.txt", "w", stdout); // write
    string s;
    int n = 0;
    while (cin >> s) {
        cout << s<< endl;
        n++;
    }
    cout <<  n;
    return 0;
}