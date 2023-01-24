#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int n;
  cin >> n;
 
  int pow2 = 1;
  while (pow2 <= n) {
    cout << pow2 <<' ';
    pow2 *=2;
  } 
  return 0;
}