#include <iostream>
#include <map>
#include <algorithm>
#include <set>
using namespace std;

int main () {
    set < pair <int,  int > > aa;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int a, b;
        cin >> a >> b;
        int sum = 0; 
        sum = a + b;
        aa.insert(make_pair(sum,i));
    }
    set < pair <int, int> > :: iterator it;
    for (it = aa.begin(); it != aa.end(); it++) {
        cout << (*it).second << " ";
    }
    return 0;
}