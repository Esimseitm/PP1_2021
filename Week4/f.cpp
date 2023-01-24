 // Дан двумерный массив n x n. Напишите программу, которая находит положение максимального элемента в массиве.
//Если максимумов два или больше, выведите позицию первого.

#include <iostream>

using namespace std;

int main (){
    int n;
    cin >>n;
    int c,b;
    int a[n][n];
    int max = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j =0; j < n ; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n ; i++) 
    {
        for(int j = 0; j < n ; j++) {
            if ( a[i][j] > max) {
                max = a[i][j];
                c = i+1;
                b = j+1;
            }
        }
    }
    cout << c << " " << b;
    
    return 0;
}