#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>


 
MAIN(){

   int i, x, r = 1, aux ;

   i = atoi(argv[1]) ;
   x = atoi(argv[2]) ;

   
   while(r != 0)
   {
      r = i % x ;
      i = x ;
      x = r ;
      
      if (r != 0)
         {
            aux = r ;
         }

      printf("%d", r) ;
      
   }
   printf("Máximo divisor comum é: %d", aux) ;
}





