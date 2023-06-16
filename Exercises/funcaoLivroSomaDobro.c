#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>

int somaDobro(int a, int b) ;
void dobro() ;
  
MAIN()
  {
    int n1, n2 ;

    n1 = atoi(argv[1]) ;
    n2 = atoi(argv[2]) ;
    int resultadoSoma ;
   resultadoSoma = somaDobro(n1, n2) ;
   


  
   
  }

int somaDobro(int a, int b) 
  {
    int resS, resD ;
    resS = a + b ;
    resD = resS * 2 ;
     printf("Resultado da soma: %d\n", resS) ;
     printf("Dobro da soma anterior: %d", resD) ;

     return 0;
    
  }




  
  

  



