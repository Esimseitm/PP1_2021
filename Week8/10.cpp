// посчитает какое количество разхных элементов есть в векторе

#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main () {
    vector<int> a;
    a.push_back(5);
    a.push_back(10);
    a.push_back(5);
    a.push_back(1);
    a.push_back(5);
    a.push_back(1);

    set<int> s(a.begin(), a.end());
    cout << s.size();
    return 0;
}