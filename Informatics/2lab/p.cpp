#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int res = c * 100 + d - (a * 100 + b);
    cout << res / 100 << " " << res % 100;
    return 0;
}