#include <iostream>

using namespace std;

int sum= 0;
int f(string s, int n) {
   sum += (s[n] - '0') / 2;
   if ( n == s.size()-1) {
       return sum;
   }
   else {
       return f(s, n + 1);
   }
}
int main () {
    string s;
    cin >> s;
    cout << f(s, 0);
    return 0;
}