// 0 - 48 
// 1 - 49
// ......

// a - 97 
// b - 98 
// .......

// A - 65
// B - 66
// Z - ....
// мы хотим вывести из с помощю цикла фор и чар

#include <iostream>

using namespace std;

int main (){
    for ( char i = '0'; i <= '9' ; i++) {
        cout << i << " - " << (int)i << endl;
    }
    return 0;
}
