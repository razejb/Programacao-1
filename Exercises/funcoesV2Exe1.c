#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>

//Este programa vê o maior de 3 valores inseridos
float maximo(float a, float b, float c) 
  {
    if((a > b) && (a > c))
      {
        printf("%.2f", a) ;
      }
    else if((b > a) && (b > c))
      {
        printf("%.2f", b) ;
      }
    else if((c > a) && (c > b)) 
      {
        printf("%.2f", c) ;
      }

      return 0 ;
  }

  MAIN()
    {
      float nA, nB, nC;

      nA = atof(argv[1]) ;
      nB = atof(argv[2]) ;
      nC = atof(argv[3]) ;

      maximo(nA, nB, nC) ;

    }