// cin >> s; // hello world --> s = hello
// getline(cin, s); // hello world --> s = hello world

#include <iostream>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    cout << s;
    return 0;
}