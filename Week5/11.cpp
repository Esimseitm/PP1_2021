// int index = s1.find(s2 , position) 
// s1 = hello ; s2 = ll
// находит с какого индекса начинается с2 в с1

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s1,s2;
    cin >>s1>>s2;
    if (s1.find(s2) == string::npos) {
    cout <<"No" ;
    } else {
    cout << "Yes";
    }
    return 0;
}