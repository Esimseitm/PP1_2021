// Вам дается N целых чисел. Ваша задача - перевернуть последовательность целых чисел. Храните N целых чисел в векторе.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
    vector<int>s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.push_back(x);
    }
    reverse(s.begin(), s.end()) ;
    for (int i = 0;  i < n; i++) {
       cout << s[i] << " ";
    }
    return 0;
}