#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>


//Este programa verifica se é possivel criar um triangulo através da inserção dos lados
float triangulo(float a,float b,float c) 
  {
    if(((a + b) > c) && ((a + c) > b) && ((b + c) > a) )
      {
        puts("Estamos na presença de um triangulo") ;
      }
    else
        puts("Não estamos na presença de um triangulo") ;

      return 0 ;
  }
  

  MAIN()
    {
      float ladoA = 5, ladoB = 6, ladoC = 2 ;

      ladoA = atof(argv[1]) ;
      ladoB = atof(argv[2]) ;
      ladoC = atof(argv[3]) ;

      printf("%d", triangulo(ladoA, ladoB, ladoC)) ;
    }