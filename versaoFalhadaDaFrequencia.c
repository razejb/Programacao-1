#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>


 
MAIN(){
   int a, b, i = 1 ;

   a = atoi(argv[1]) ;
   b = atoi(argv[2]) ;

   if(a == b){

      while(i <= (a * b))
      {
         if(i % a == 0)
            {
               printf("@\n") ;
            }
         else  
            {
               printf("@") ;
            }
            i++ ;
      }
   
   }
   else
      {
         printf("Insira os valores iguais") ;
      }
   


}





