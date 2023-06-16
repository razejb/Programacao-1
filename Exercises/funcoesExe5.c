#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>


int custosEnvio(int custo_envio, int c, int cs, int n)
  {
    custo_envio = c + cs * (n - 1) ;

    return custo_envio ;
  }

MAIN()
  {
    int custoEnvio = 0, c = 0, cs = 0, n = 0 ;

    c = atoi(argv[1]) ;
    cs = atoi(argv[2]) ;
    n = atoi(argv[3]) ;

    printf("O custo do envio é: %d", custosEnvio(custoEnvio, c, cs, n)) ;
  }