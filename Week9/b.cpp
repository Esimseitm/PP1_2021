#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

int main () {
vector <int> a1, a2;
int n;
cin >> n;
for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if ( x % 2 == 0) {
        a1.push_back(x);
    } else {
        a2.push_back(x);
    }
}
sort(a1.begin(), a1.end());
sort(a2.begin(), a2.end());
reverse(a1.begin(), a1.end());
for (int i = 0; i < a1.size(); i++) {
    cout << a1[i] << " ";
}
for (int i = 0; i < a2.size(); i++) {
    cout << a2[i] << " ";
}
return 0;
}