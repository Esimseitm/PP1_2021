// найти сумму цифр заданного числа

#include <iostream>

using namespace std;

int sum = 0;
int f(string s, int i) {
    if (i == s.size()) {
        cout << sum;
    }
    f(s, i + 1);
    sum += (s[i] - '0');
}

int main () {
    string s;
    cin >> s;
    f(s , 0);
    return 0;
}