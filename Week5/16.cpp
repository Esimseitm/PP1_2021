// s.insert(start, string) 
// s = hello; s.insert(2, "abc") --> heabcllo

#include <iostream>

using namespace std;

int main (){
    string s1;
    cin >> s1;
    s1.insert(2, "abc") ;
    cout << s1;
    return 0;
}