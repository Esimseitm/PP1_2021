//Дан массив, состоящий из целых чисел. Напишите программу, которая находит положение максимального элемента массива.
//Если максимумов два или больше, вы должны вывести первую позицию.

#include <iostream>
#include <string>
using namespace std;


int main()
{
   int n, max;
   max=-1000000000;
   cin >> n;
   int array [n];
   for ( int i = 0; i< n; i++)
   {
       cin >> array [i];
       if (array[i]>max) max=array[i];
   }
   
       for ( int i = 0; i< n; i++)
       {
           if(max==array[i])
           {
               cout<<i+1;
               break;
               }
           }
       
      
}