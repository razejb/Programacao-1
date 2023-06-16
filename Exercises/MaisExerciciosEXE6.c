#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>


 
MAIN(){

   int y = 1, x = 0, i = 1, c = 0;

   c = atoi(argv[1]) ;
   x = atoi(argv[2]) ;
   

   while((y % c )!= 0)
      {
         y = x * i ;
         i++ ;
      }
      
      printf("O minimo múltiplo comum é: %d", y) ;
}





