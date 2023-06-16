#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>
#include <cstring>


/*
Escreva uma função que recebe dois apontadores para inteiros (passagem de parâmetros por refer-
ência) e devolve o endereço do maior valor. Escreva um programa para testar a função. Considere
o protótipo int *vmaior( int *v1, int *v2 ).
*/ 


int *vmaior( int *v1, int *v2 ) ;

MAIN()
  {
    int a = 5 , b = 10;
    
   

   printf("%d", *vmaior( &a , &b )) ;
  
  }

int *vmaior( int *v1, int *v2 )
  {

    if( *v1 > *v2 )
      {
        return v1 ;
      }
    return v2 ;
  }




