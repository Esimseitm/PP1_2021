#include <iostream> 

using namespace std;

int main () {
    int a, b;
    cin >>a >> b;
    int max = 0;
    if (a >= b) {
        max = a;
    } else {
        max = b;
    }
    cout << max;
    return 0;
}