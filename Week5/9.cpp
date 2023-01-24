#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int  a[5] = {3,5,4,-7,8,};
    /* cout << a<< " ";
    cout <<*a; /// *a все равно что a[0]   */ 
    // как отсортировать массив
    sort (a, a+5);
    for (int i = 0; i < 5 ; i++) {      // -7 3 4 5 8 
        cout << a[i] << " ";
    }
    return 0;
}
