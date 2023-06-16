#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>


MAIN()
{
float dTravagem, velocidade = 0 ;

velocidade = atof( argv[1] ) ;
printf("A velocidade inserida é: %.2f", velocidade) ;

dTravagem = (1.0 / 2) * pow((velocidade/10), 2) ;

printf("\n\nA distância de travagem foi: %.4f", dTravagem) ;
}
