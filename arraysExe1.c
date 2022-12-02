#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>

int verifica_ordem( int vec[], int sz ) ;

MAIN()
  {
   int a[]={1,2,2};
   int b[]={1,2,6,4,5};
   int c[]={2,4};
   int d[]={7,8};

    int resultado ;
    resultado = verifica_ordem( b, 5 ) ;
    printf("%d", resultado) ;
  }


int verifica_ordem( int vec[], int sz ) 
  {
    int i ;
   for( i = 1; i < sz; i++)  
    {
      printf("%d %d\n", vec[i-1], vec[i]) ;
      if(vec[i-1] > vec[i])
        {
          printf("falhou\n") ;
          return 0 ;
        }
        
    }
    return 1;

    
  }
  

  



