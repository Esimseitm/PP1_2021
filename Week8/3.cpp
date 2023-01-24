// begin 

#include <iostream>
#include <vector>

using namespace std;



int main () {
    vector <int> a;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(x);
    }
    // cout << (*a.begin()) << " " << (*a.end());
    a.insert(a.begin() + 3, 2,  100 );
    a.erase(a.begin() + 1, a.begin() + 3);

    for (int i = 0; i < a.size() ; i++) {
        cout << a[i] << " ";
    }
    return 0;
}