 #include <iostream>

 using namespace std;

 int main () {
     int a, b;
     cin >> a >> b;
     if ( a < b) {
         cout << 2;
     } else if ((a > b) && ((a % b) % 2 != 0)) {
         cout << a;
     } else if ((a > b) && ((a % b) % 2 == 0)) {
         cout << 4;

     }
     return 0;
 }