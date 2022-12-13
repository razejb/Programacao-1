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

Pretende-se escrever uma função que inverta a ordem dos elementos de um array de inteiros. 
Por exemplo, se inicialmente o array contiver os elementos 1, 2, 3, 4, 
      depois de executar a função o array deverá ficar com 4, 3, 2, 1.

O protótipo da função é o seguinte:

void reverse(int array[], int sz);

Escreva a função reverse em linguagem C.

  }
  */


void reverse(int array[], int sz) ;


MAIN()
{  
  int arr[] = {1, 2, 3, 4} ;

  reverse(arr, 4) ;
  for(int i=0;i<4;i++){
    printf("%i", arr[i]);
  }
}

void reverse(int array[], int sz)
  {
    int i, aux1=0;
    for(i = 0 ; i < sz/2; i++)
      {
        aux1=array[i];
        array[i]=array[sz-i-1];
        array[sz-i-1]=aux1;
       
      }
        
  }







