#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>


MAIN()
{
    float raio, pCirc, aCirc, vEsf ;

 raio = atof( argv[1] ) ;
 printf("Insira o valor do raio: %.2f\n", raio) ;
 pCirc = M_PI * raio * 2 ;
 aCirc = M_PI * pow(raio, 2) ;
 vEsf = (4f / 3) * M_PI * pow(raio, 3) ;


 printf("\nPerimetro da circunferencia: = %.2f", pCirc ) ;
 printf("\nArea da circunferencia: = %.2f", aCirc ) ;
 printf("\nVolume da esfera: = %.2f", vEsf ) ;
}
