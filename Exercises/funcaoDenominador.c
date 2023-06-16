#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>


  void printFracao(int n1, int d1)
    {
        printf("%d", n1) ;
        puts("\n--") ;
        printf("%d\n", d1) ;


    }
  
  int func(int n1, int d1, int n2, int d2)
    {
      if (d1 == d2)
        {
          int res = n1 + n2 ;
          
          printFracao(res, d1) ;
        
        }
      else 
        {
          d1 * d2 ;
          d1 * n2 ;
          d2 * n1 ;

          int novoDenominador = d1 * d2 ;
          int novoNumerador = d2 * n1 + d1 * n2 ;

          printFracao(novoNumerador, novoDenominador) ;
         
         
        }

      return 0 ;
    }
  
MAIN(){

  int numerador1 = 1, denominador1 = 2, numerador2 = 1, denominador2 = 3 ;

  func(numerador1, denominador1, numerador2, denominador2) ;

  

  
  
}






