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

O objetivo da função int mix(int a[], int b[], int sz, int c[]) é preencher o vetor c 
com os elementos intercalados de cada um dos vetores a e b. 

Por exemplo, se a={1,2,3,4} e b={5,6,7,8}, a função preenche c={1,5,2,6,3,7,4,8}. 
Considere que a e b têm sz elementos. A função devolve o número de elementos de c.

  int mix(int a[], int b[], int sz, int c[]){
    int i, index;
    for(i = 0; <a>; i++){
      index = <b>;
      c[index] = a[<c>];
      c[index <d>] = b[<e>];
    }
    return <f>;
  }
  */

int mix(int a[], int b[], int sz, int c[]) ;


MAIN()
{  
    int arrA[] = {1,2,3,4} ;
    int arrB[] = {5,6,7,8} ;
    int arrC[50] ; 

  printf("%d", mix(arrA, arrB, 4, arrC)) ;
}

 int mix(int a[], int b[], int sz, int c[])
 {
   int i, index;
    for(i = 0; i < sz; i++){
      index = i*2;
      c[index] = a[i];
      c[index + 1] = b[i];
    }
    return 2*sz;
 }








