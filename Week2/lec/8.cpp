#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    if ((n % 4 == 0) && (n % 100 !=0) || (n % 400 == 0)){ // задача на високосный год
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}