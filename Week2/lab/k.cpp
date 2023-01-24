// Найдите все точные квадраты натуральных чисел, не превышающие заданное число N

#include <iostream> 

using namespace std;

int main () {
    int a, b;
    cin >> a;
    int i = 1;
    do 
    {
      b = i * i;
      if (b <= a) {
          cout <<b<<endl;
      }
      i++;
    } while (b <= a);

    return 0;
}