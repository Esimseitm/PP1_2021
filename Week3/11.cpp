// учимся вводить данные в массив
/* #include <iostream>

using namespace std;

int main () {
    /* int n;
    int a[100];
    cin >> n; // n = 3
              // 3 5 8
    for ( int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    } 
    return 0;
} */   


// найти сумму чисел в массиве

#include <iostream>

using namespace std;

int main () {
    int n;
    int a[100];
    cin >> n; // n = 3
              // 3 5 8
    for ( int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int sum = 0;
    for ( int i = 0; i < n; i++) {
        sum += a[i];
    }
    cout << sum;
    return 0;
}
