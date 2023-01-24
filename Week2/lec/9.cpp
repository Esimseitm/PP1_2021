#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    if (n >= 95){
        cout << "A";
    } else if (n >= 90 && n < 95){
        cout << "A-";
    } else if (n >= 85 && n < 90){
        cout << "B+";
    } else if (n >= 80 && n < 85){
        cout << "B";
    } else if ( n < 50){
        cout << "FX";
    }
    return 0;
}