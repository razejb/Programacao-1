#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>



int sucessor(int n)
  {
      n = n + 1 ;
      return n ;
  }

MAIN()
  {
    int numero = 0 ;

    numero = atoi(argv[1]) ;

    printf("O sucessor de %d é %d", numero, sucessor(numero)) ;
  }