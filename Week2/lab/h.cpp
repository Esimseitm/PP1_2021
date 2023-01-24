//Учитывая n чисел, вам нужно посчитать количество четных и количество нечетных чисел из заданного
//список.

#include <iostream>

using namespace std;

int main () {
    int n, j=0, h=0, m;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> m;
        if (m % 2 == 0) 
        { 
            j += 1;
        } else {
            h += 1;
        }
    }
    cout << j << " " << h;
    return 0;
}  