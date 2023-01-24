#include <iostream>
#include <set>

using namespace std;

int main () {
    set<int>a;
    a.insert(5);
    a.insert(6);
    a.insert(1);
    a.insert(5);
    a.insert(10);
    a.insert(5);
    a.insert(1);
    a.insert(10);
    // 1 5 6 10
    
    // iterator -> a.begin() , a.end()
    set<int>::iterator it;
    //for (it = a.begin(); it != a.end(); it++) {
    //    cout << *it << " ";
    if (a.find(5) != a.end() ) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}