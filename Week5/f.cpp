// У вас есть строка s и два целых числа l, r. Вам нужно вывести подстроку s [l; р]. Нумерация персонажей
//in s начинается с 0. Гарантируется, что l, r не могут выходить за пределы строки
#include <bits/stdc++.h>

using namespace std;

int main(){
    int l,r;
    string s;
    cin >> s >> l >> r;
    for (int i = l; i <= r; i++) {
        cout << s[i];
    }
    return 0;
}