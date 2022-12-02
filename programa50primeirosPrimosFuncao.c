#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
  
  //Próximo programa é mostrar os 50 primeiros primos

  int func(int n)
  { 
    int i = 2;
    while(i < n) 
      {
        if(n % i == 0)
          {
            return 0 ;
          }
          i++ ;
          
          
      }
    return 1 ;
  }

MAIN(){

  int i = 1 ;
  

 while( i <= 50 )
  {
    if(func(i))
      {
        printf(" %d ", i) ;
      }
      i++ ;
  }

}






