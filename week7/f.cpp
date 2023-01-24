//  Print a count of even digits in a given number.
#include <iostream>

using namespace std;

int sum = 0;
int f(string s, int m) {
    if (m == s.size()) {
        return sum;
    }
    if (s[m] % 2 == 0) {
        sum++;
    }
    return f(s, m + 1);
}

int main () {
    string s;
    cin >> s;
    cout << f(s, 0);
    return 0;
}