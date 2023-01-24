// Дан массив, состоящий из целых чисел. Напишите программу, которая будет менять местами элементы в интервале l, r.

#include <iostream>

using namespace std;

int main () {
    int n, l, r;
    cin >>n>>l>>r;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i] ;
        if (i >= l-1 && i <= r-1) {
            for (int i = n -1 ; i >= 0; i--) {
                cout << arr[i] << " " ;
            }
        } else {
            cout << arr[i] << " ";
        }     

    }

    return 0;

}