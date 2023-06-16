#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>

/*Implemente a função acumulado(int vec[], int sz, int index), que devolve o acumu-
lado dos valores dos elementos do vetor entre o índice 0 e index. Por exemplo,
acumulado([1,2,3], 3, 1) devolve 3*/

int acumulado(int vec[], int sz, int index) ;
MAIN()
  {
    int i, size ;
   

    printf("Insira o tamanho do array: ") ; scanf("%d", &size) ;

     int vec[size] ;

    for(i = 0; i < size; i++)
      {
        printf("%dº valor do array: ", i+1) ;
        scanf("%d", &vec[i]) ;
      }

    printf("%d", acumulado( vec, size, 1)) ;

  }

int acumulado(int vec[], int sz, int index)
  {
    int sum = 0;
    for(int i = 0; i <= index; i++)
      {
        sum += vec[i] ;
      }
    return sum ;
  }