// s.substr(index, length)
// тоесть он берет строку и вырезает символы от индекса и идет забирая генгтх символов
// если вести только индекс, то он заберет все символы от индекса до конца

#include <iostream>

using namespace std;

int main(){
    string s1, s2, s3;
    cin >> s1;
    s2 = s1.substr(2, 3);
    s3 = s1.substr(5) ;

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    return 0;
}

     /* abcdefghjk
       abcdefghjk
       cde
       fghjk   */ 