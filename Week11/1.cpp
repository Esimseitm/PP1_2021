#include <vector>

using namespace std;

int main () {
    pair <string, string> students[10];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string name, surname;
        cin >> name >> surname;
        students[i]= make_pair(name, surname);
    }
    
    return 0;
}