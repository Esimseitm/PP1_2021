#include <iostream>

using namespace std;

int main () {
    pair<string, pair<string, string> > students[100];
    string ID, name, surname;
    int n;
    cin >> n;
    for (int i = 0; i  < n; i++) {
        cin >> ID >> name >> surname; 
        students[i] = make_pair(ID, make_pair(name, surname));

    }
    for ( int i = 0 ; i < n; i++) {
        cout << students[i].first << " " << students[i].second.second << endl;
    }
    return 0;
}