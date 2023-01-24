#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
     /* for (int i = 0;;) {
        i++;
        if  (i == n)
        break;
        if ( i % 2 == 0)
        continue;
        cout << i << endl;
     
    } */ 
    
     /* int i = 0;
    while ( i < n) {
    cout << i;
    i++;
    }  */ 

    int i = 0;
    do {
        cout << i;
        i++;

    }   while (i < n);
    return 0;
}