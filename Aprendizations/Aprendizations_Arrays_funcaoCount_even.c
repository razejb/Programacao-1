// ---Realizado por: João Santos---

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>
#include <cstring>




/*
Apredizations

Pretende-se escrever uma função que conte a quantidade de números pares num certo array de inteiros. 
Por exemplo, o array {1, 2, 3, 4, 5} contém 2 números pares.

O protótipo da função é o seguinte:

    int count_even(int array[], int sz);


  }
  */


 int count_even(int array[], int sz) ;

MAIN()
{  
  int arr[] = {1, 2, 3, 4, 5};
  printf("%d", printf("%d", count_even(arr, 5))) ;
}

 int count_even(int array[], int sz)
  {
    int count = 0;
    for(int i = 0; i < sz; i++)
      {
          if(array[i] % 2 == 0)
          {
            count++ ;
          }
      }
      return count;
  }






