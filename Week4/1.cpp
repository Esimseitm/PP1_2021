// infinity loop бесконечный цикл
// with for
/*
#include <iostream>

using namespace std;

int main () {
    int cnt;
    for ( ; ;)  {
        cout <<"Never end - " << cnt << endl;
        cnt++;
        
    }
    return 0;
}   */ 


// with while 

#include <iostream>

using namespace std;

int main () {
    int cnt;
    while (true) {
        cout << "Never end -" << cnt << endl;
        cnt++;
    }
    return 0;
}
    