// рекурсия 
#include <iostream>
using namespace std;

void f0() {
   cout << "Hello world from f0" << endl;
}

void f1() {
    cout << "Hello world from f1" << endl;
}

void f2() {
    f1();
    f0();
    cout << "Hello world from f2" << endl;
}

void f3() {
    f2();
    cout << "Hello world from f3" << endl;
}

int main () {
    f3();
    return 0;
}