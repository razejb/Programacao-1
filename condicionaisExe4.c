#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>


MAIN()
{
    
   int valor = atoi( argv[1] ) ;
printf("O valor inserido para calcular a raiz foi: %.d\n", valor) ;

printf("\nA raiz de %d é %.2f", valor, sqrt(valor) ) ;



}

