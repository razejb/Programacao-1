#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>

//Este programa verifica se é possivel criar um triangulo através da inserção dos lados, e o tipo do triangulo
float triangulo(float a,float b,float c) 
  {
    if(((a + b) > c) && ((a + c) > b) && ((b + c) > a) )
      {
        puts("Estamos na presença de um triangulo") ;

        if((a != b) && (b != c) && (a != c) )
          {
            puts("Escaleno: 1") ;
          }
        else if(((a != b) && (b != c) && (a == c)) || ((b != c) && (a != c) && (a == b)) || ((a != b) && (a != c) && (b == c)))
          {
            puts("Isósceles: 2") ;
          }
        else if((a == b) && (b == c) && (a == c))
          {
            puts("Equilátero: 3") ;
          }
      }
    else
        puts("Não estamos na presença de um triamgulo: -1 ") ;

      return 0 ;
  }
  

  MAIN()
    {
      float ladoA = 0, ladoB = 0, ladoC = 0  ;

      ladoA = atof(argv[1]) ;
      ladoB = atof(argv[2]) ;
      ladoC = atof(argv[3]) ;

      printf("%d", triangulo(ladoA, ladoB, ladoC)) ;
    }