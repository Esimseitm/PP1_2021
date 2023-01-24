// задача: мы хотим найти и вывести  все цифры в строке 
// 123abc789d10
// 'a' - 97
// 'A' - 65
// '0' - 48, '9'
#include <iostream>

using namespace std;

int main(){

    string s= "123abc789d10";
    for (int i = 0; i < s.size(); i++) 
    {
        if (s[i] >= '0' && s[i] <= '9' ) {
            cout << s[i];
        }
    }
    return 0;
}