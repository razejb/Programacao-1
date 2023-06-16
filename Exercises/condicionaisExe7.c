#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>


MAIN()
{
     
int n1, n2 ;

n1 = atoi( argv[1] ) ;
n2 = atoi( argv[2] ) ;

printf("Os números inseridos são: %d %d", n1, n2 ) ;

    if ( n1 % n2 == 0 )
        {
            printf("\n%d é múltiplo de %d", n1, n2) ;
        }
    else
        {
            printf("\n%d não é múltiplo de %d", n1, n2) ;
        }
}
