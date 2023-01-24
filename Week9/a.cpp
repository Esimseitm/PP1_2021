#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
    vector<pair <int, int> >s;
    int n;
    int x, y;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x>> y;
        s.push_back(make_pair(x,y));
    }
    sort( s.begin(), s.end());
    for (int i = 0;  i< n; i++) {
        cout << s[i].first << " "<< s[i].second << endl;
    }
    return 0;
}