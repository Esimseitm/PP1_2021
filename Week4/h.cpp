// Помогите Айсултану выбрать, какую дисциплину бросить, чтобы у него был хороший средний балл. Каждая строка представляет собой
//предмет со своими оценками. Выберите один предмет с минимальной общей оценкой. Если оценки по двум и более предметам
//равны, выберите первый.

#include <iostream>
using namespace std;

int main (){
    int n,m;
    cin >>n >> m;
    int a[n];
    for (int i=0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < m; j++) {
            int s;
            cin >>s;
            cnt = cnt +s;
        }
        a[i] = cnt;
    }
    int min = a[0], k = 0;
    for (int i =0; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
            k = i ;
        }
    }
    cout << k + 1;
    return 0;
}