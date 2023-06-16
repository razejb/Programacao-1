#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>
#include <cstring>


/*
O programa seguinte tem como objetivo imprimir os valores de var1 e var2 e 
os seus endereços (guardados em ptr1 e ptr2).

Siga os seguintes passos e interprete, para cada caso, os valores apresentados pelo programa:

(a) Se tentar compilar e executar este programa ocorrerá o erro Segmentation fault. 
  Corrija o programa para que isso não aconteça.

(b) Altere o programa para que este imprima também o tamanho dos tipos de variáveis char,
char *, int e int *.

(c) Altere o programa para que este imprima ainda os valores de prt1+1 e ptr2+1 e compare com
os valores de ptr1 e ptr2
*/ 

int main()
  {
    int var1 = 5;
    char var2 = 'a';
    int *ptr1 = &var1;
    char *ptr2;
    ptr2 = &var2;


    printf("var1 tem o endereço %p e o valor %d, tem o tamanho %d de bytes e o tamanho em ponteiro %p, valores ptr1+1 %d\n", ptr1, var1, sizeof(var1), sizeof(ptr1), ptr1 + 1  );
    printf("var2 tem o endereço %p e o valor %c, tem o tamanho %c de bytes e o tamanho em ponteiro %p, valores ptr1+2 %p\n", ptr2, *ptr2, sizeof(var2), sizeof(ptr2), ptr2 + 2 );
  }






