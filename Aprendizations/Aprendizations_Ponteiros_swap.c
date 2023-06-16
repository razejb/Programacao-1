// ---Realizado por: João Santos---

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>
#include <cstring>
#include <ctype.h>




/*
Apredizations



Escreva uma função swap que permita trocar os valores de duas variáveis inteiras.

A função deverá ter protótipo

    void swap(int *a, int *b);

Um exemplo de utilização desta função seria

    int x = 1, y = 2;
    swap(&x, &y);


  */

void swap(int *a, int *b) ;

MAIN()
{  
    int a = 1, b = 2 ;
    printf(" Antes: %d  %d", a, b) ;

    puts("") ;
    swap(&a, &b) ;
      printf("Depois: %d  %d", a, b) ;
}

void swap(int *a, int *b)
    {
        int temp = 0;
        temp = *a ;
        *a = *b ;
        *b = temp ;
    }







