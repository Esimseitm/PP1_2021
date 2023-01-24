#include <iostream>
using namespace std;

double manek(double n, double m) {
    return (m * 100) / n;
}
 
int main () {
    double n, m;
    cin >> n >>  m;
    cout << manek(n, m);
    return 0;
}