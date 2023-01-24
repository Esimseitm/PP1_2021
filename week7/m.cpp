#include <iostream>

using namespace std;

void f( int n, int a = 1) {
      if ( n < a) {
          return ;
      }
      cout << a << " ";
      f(n, a+1);
}
 

int main () {
    int n;
    cin >> n;
    f(n);
    return 0;
}