#include <iostream>

using namespace std;

int main () {
    /*cout << 1 << endl;
    cout << 2 << endl;
    cout << 3 << endl;
    cout << 4 << endl;
    cout << 5 << endl;
    cout << 6 << endl;
    cout << 7 << endl;
    cout << 8 << endl;
    cout << 9 << endl;
    cout << 10 << endl;*/ 
    /* for (int i = 1; i <= 10; i++){
        cout << i << endl;
    }*/

    /*
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++){
        cout << i << endl;
    } */ 


    // ВЫВЕСТИ ВСЕ ЧЕТНЫЕ ЧИСЛА ОТ 1 ДО "n"
     /*int n;
    cin >> n;
    for (int i = 2; i <= n; i +=2) { // i = 2, 4, 6
        cout << i << endl; 
    } */

    // ВЫВЕСТИ ВСЕ ne chetnie ЧИСЛА ОТ 1 ДО "n"
    int n;
    cin >> n;
    for (int i = 1; i <= n; i +=2) { // i = 2, 4, 6
        cout << i << endl;
    }
    return 0;
}