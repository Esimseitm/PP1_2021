// queue
// это обычная очередь

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

queue<int> q;
int x, y;
int d[100];
int c[100];

int main () {
    cin >> x >> y;
    q.push(x);
    d[x] = 1;
    c[x] = x;
    vector<int> path;
    while (!q.empty()) {
        x = q.front();
        if (d[x+1] == 0 ) {
            q.push(x + 1);
            d[x + 1] = d[x] + 1;
            c[x + 1] = x;
        }
        if ( d[x* 2] == 0) {
            q.push(x * 2);
            d[x * 2] = d[x] + 1;
            c[x * 2] = x;
        }
        if (x > 0 && d[x - 1] == 0) {
            q.push(x - 1);
            d[x - 1 ]= d[x] + 1;
            c[x - 1] = x;
        }
        q.pop();
        if (d[y] > 0) {
            break;
        }

    }
    cout << d[y] - 1 << endl;
    while ( c[y] != y) {
        path.push_back(y);
        y = c[y];
    } 
    path.push_back(y);
    for (int i = path.size() - 1;i >= 0; i--) {
        cout << path[i] << " ";
    }
    return 0;
}