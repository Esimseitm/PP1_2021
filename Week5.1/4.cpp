#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    string s = "hello";
    // sort(s.begin(), s.end());
    reverse(s.begin(), s.end());
    cout << s;
    return 0;
}