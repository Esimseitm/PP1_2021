#include <iostream>
#include <map>

using namespace std;

int main () {
    multimap<string,int>mm;
    mm.insert(make_pair("banana", 300));
    mm.insert(make_pair("apple", 123));
    mm.insert(make_pair("apple", 124));
    mm.insert(make_pair("apple", 125));
    mm.insert(make_pair("apple2", 140));
    mm.insert(make_pair("apple", 500));

    string str;
    cin >> str;
    /*
    pair< multimap < string, int >:: iterator , multimap<string , int> :: iterator > pr = mm.equal_range(str);
    multimap<string, int> :: iterator it;
    for (it = pr.first; it != pr.second; it++) {
        cout << (*it).second << endl;
    }

    */
    multimap<string, int> :: iterator it;
    for (it = mm.begin(); it != mm.end(); it++ ) {
        cout <<(*it).first << " " << (*it).second << endl;
    }
    return 0;
}