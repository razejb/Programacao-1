#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>
#include <cstring>

/*
Pointers Example
*/ 

void swap(int *x, int *y) 
  {
    int temp;        
    temp = *x ;     //Salva o valor no endereço X
    *x = *y ;       //O valor do endereço X, agora é = ao do endereço Y
    *y = temp ;     //O valor do endereço Y, agora é = ao temp

    return ;
  }

int main(void)
  {
      int a = 100 ;
      int b = 200 ;

      printf("Before swap, value of a: %d\n", a) ;
      printf("Before swap, value of b: %d\n", b) ;

      putchar('\n') ;
      swap(&a, &b) ;
        
      printf("After swap, value of a: %d\n", a) ;
      printf("After swap, value of b: %d\n", b) ;

        
    return 0 ;
  }



