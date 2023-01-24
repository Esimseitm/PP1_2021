// прямоугольник *
#include <iostream>

using namespace std;

int main () {
    int a, b;
    cin >> a >> b;
    for ( int j = 0; j < a; j++)
    {
        cout <<"*";
            for (int i = 0 ; i < b; i++)
          {
            cout <<"*";
            
          }   
          cout <<endl;
    }
  
    return 0;
}