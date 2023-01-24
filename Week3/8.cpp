// исходя от 7 задачи, мы хотим найти сумму цифр 1000 значного числа. Но Инт не позволяет найти  такое.
// тогда мы это число запишем как строку

#include <iostream>

using namespace std;

int main () {
    string s;
    cin >> s;
    int sum = 0;
    for ( int i = 0; i < s.size(); i++) {
        sum += (s[i] - '0') ;
    }
    cout << sum;

    return 0;
    
}