// s1 = "hello"
// s2 = "world" 
// s3 = s1 + s2; s3 = "helloworld"

#include <iostream>

using namespace std;

int main (){
    string s1 = "Hello\n";
    string s2 = "World";
    string s3 = s1 + s2;
    cout << s3 << " " << s3.size();
    return 0;
}