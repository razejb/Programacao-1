#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>


 //Este programa determina a inserção de cada valor e vê 
 //o maior da sequência, quando digitar zero o programa termina

MAIN(){

   int i = 0, a = 1, b, max = 0 ;
   

  

   while ( a != 0 )
   {
     
      scanf("%d ,", &a) ;
      
      
      if(a>max)
      {
         max = a ;
      }
      i++ ;


   }



      printf("\n%d", max) ;
   

   
}





