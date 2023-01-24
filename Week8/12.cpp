#include <iostream>
#include <map>
using namespace std;

map<string, pair<string, string> > a;
int n;

int main () {
    cin >> n;
    string ID, name , surname;
    for (int i = 0;  i < n; i++) {
        cin >> ID >> name >> surname;
        a[ID] = make_pair(name, surname);
    }
    map<string , pair<string, string> >:: iterator it;
    for ( it = a.begin(); it != a.end(); it++) {
        cout << (*it).first << "--" << (*it).second.first << endl;
    }
    return 0;
}