#include <iostream>
#include <vector>

using namespace std;

int main () {
    // vector<int> a(10);
    vector<int> a(10, 2) ; // все 10 чисел будут двойками
    cout << a.size() << endl;
    for (int i = 0; i < a.size(); i++) {
        cout << a[i];
    }
    return 0;
}