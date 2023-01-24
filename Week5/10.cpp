// как перевернуть весь массив
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int  a[5] = {3,5,4,-7,8,};
    reverse(a, a+5);
    for (int i = 0; i < 5 ; i++) {      
        cout << a[i] << " ";
    }
    return 0;
}
// answer 8 -7 4 5 3 