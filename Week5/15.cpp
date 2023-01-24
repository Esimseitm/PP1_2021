// s.erase(start, length) 
// удаляет несколько символов (ленгтх) начиная от старта

#include <iostream>

using namespace std;

int main (){
    string s1;
    cin >> s1;
    s1.erase(2, 3);
    cout << s1;
    return 0;
}

/* abcdifghjkl
   abfghjkl  */ 