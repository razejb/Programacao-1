#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>


 
MAIN(){
   

   int n = 1, linha = 0, coluna = 0 ;

   n = atoi(argv[1]) ;
 

        while( linha < n )
         {
            coluna = 0 ;
            
           while(coluna < n)
           {
               printf("@") ;
               coluna++ ;
           }
           printf("\n") ;
           linha++ ;
         }

}





