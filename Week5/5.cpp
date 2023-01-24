// s1 = 432
// s2 = 45
// кто больше , кажется что болье s1 
// но в стринге сравниваются индексы а не числа
// поэтому с2 больше с1
 
#include <iostream>

using namespace std;

int main (){
    string s1= "432";
    string s2= "45";
    if (s1 > s2) {
        cout << "First";
    } else {
        cout << "Second";
    }
    return 0;
}