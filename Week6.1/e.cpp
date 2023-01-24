#include <bits/stdc++.h>
using namespace std;


double calc(double a, double b ) {
    double c;
    c = ((a*a) + (b*b));
    c = sqrt(c);
    cout << setprecision(4)<<c;
}
int main () {
    int a, b;
    cin >> a >> b;
    calc(a,b);
    return 0;
} 