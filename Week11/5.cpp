#include <bits/stdc++.h>

using namespace std;

int main () {
    set < int> a;
    a.insert(5);
    a.insert(6);
    a.insert(1);
    a.insert(5);
    a.insert(10);
    a.insert(1);
    set < int > :: iterator it;
    for (it = a.begin(); it != a.end(); it++) {
        cout << *it << " ";
    }
    return  0;
}