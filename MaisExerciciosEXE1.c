#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>

//Neste programa verificamos de o número é impar e múltplo de 3, se é só impar ou se é só par
MAIN()
{
    int a = 0 ;

    a = atoi(argv[1]) ;

    if(a % 2 != 0 && a % 3 == 0)
        {
            printf("O número %d é impar e multiplo de 3", a) ;
        }
    else if(a % 2 != 0)
        {
            printf("O numero %d é impar", a) ;
        }
    else if(a % 3 == 0)
        {
            printf("O numero %d é multiplo de 3", a) ;
        }



}
