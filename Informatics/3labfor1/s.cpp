#include <iostream>

using namespace std;

int main () {

int n;
  cin >> n;
  int pos = 0, cur = 1;
 
  for ( ; pos < n ; )
  {
    for (int i = 0; i < cur; i++)
    {
      printf("%d ", cur);
      pos++;
      if (pos == n)
        break;
    }
    cur++;
  }
  return 0;
}