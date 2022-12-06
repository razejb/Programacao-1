#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>

/*
Pointers Example
*/ 

//Ao alterar o apontador vamos alterar o valor, 
/*    porque o valor, está a apontar para o endereço do valor->->->  // Supondo que, *apontador = &valor então,
                                                              \->->  // *apontador = 15   ->     valor = 15 se 
                                                               \ ->*/// *apontador = 25,   então valor = 25

                                                       
int arraySumV1(int array[], const int n)
  {
    int sum = 0, *ptr ;
    int *const arrayEnd = array + n ;

    for(ptr = array; ptr < arrayEnd; ++ptr)
      sum += *ptr;

      return sum ;
  }

/*  \/ equal /\  */

int arraySumV2(int *array, const int n)
  {
    int sum = 0 ;
    int *const arrayEnd = array + n ;

    for( ; array < arrayEnd; ++array )
      sum += *array;

      return sum ;
  }

int main(void)
  {
    int arraySumV1(int array[], const int n) ;
    int arraySumV2(int *array, const int n) ;

    int valuesV1[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5} ;
    int valuesV2[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5} ;

    printf("The sum is %i\n", arraySumV1(valuesV1, 10)) ;

    printf("The sum is %i\n", arraySumV2(valuesV2, 10)) ;

    
  }

