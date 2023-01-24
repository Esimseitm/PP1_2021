// команда показывет скоолько строк в инпуте
#include <iostream>

using namespace std;

int main () {
    freopen("input.txt", "r", stdin); // read
    freopen("output.txt", "w", stdout); // write
    string s;
    int n = 0;
    while (getline(cin, s)) {
        n++;
    }
    cout <<  n;
    return 0;
}