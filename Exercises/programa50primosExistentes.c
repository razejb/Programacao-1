#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
  
  //Este programa analisa os 50 números primos existentes.

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

  int i = 1, a = 0 ;
  

 while( a <= 50 )
  {
    if(func(i))
      {
        printf(" %d ", i) ;
        a++ ;
      }
      i++ ;
  }
}






