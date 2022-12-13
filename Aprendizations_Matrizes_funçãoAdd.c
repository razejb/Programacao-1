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

Pretende-se implementar uma função que calcule a soma de duas matrizes de dimensão 3 x 3.

A função deve somar as matrizes x e y, e colocar o resultado em z. O protótipo da função é o seguinte:

    void add(int x[][3], int y[][3], int z[][3]);

  }
  */


void add(int x[][3], int y[][3], int z[][3]);

MAIN()
{  
  int matriz1[][3] = {1, 0, 0,
                      0, 1, 0,
                      0, 0, 1}; 

  int matriz2[][3] = {1, 0, 0,
                      0, 1, 0,
                      0, 0, 1};

  int matrizSoma[][3] = {0, 0, 0,
                         0, 0, 0,
                         0, 0, 0};

  add(matriz1, matriz2, matrizSoma) ;                      

  
}

void add(int x[][3], int y[][3], int z[][3])
  {
    int i, j;
    for(i=0; i < 3; i++)
      {
        for(j=0; j < 3; j++)
        {
          z[i][j] = x[i][j] + y[i][j] ;
          printf("%d", z[i][j]) ;
        }
      }

  }








