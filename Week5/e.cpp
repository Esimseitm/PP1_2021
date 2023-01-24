// Вам дано целое число N, вам нужно ответить, сумма цифр в нечетных позициях равна сумме цифр
//в четных позициях.
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    int sum = 0;
    int sum1 = 0;
    for (int i = 0; i < s.size(); i++) {
        if (i % 2 == 0) {
            sum += s[i];
        }
        if (i % 2 != 0) {
            sum1 += s[i];
        }
    }
    if (sum == sum1) {
        cout << "YES" ;
    } else {
        cout << "NO";
    }

    return 0;
}