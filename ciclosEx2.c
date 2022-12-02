#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>


MAIN()
{

int i = 1, a = 0 ;

a = atoi(argv[1]) ;

for ( i; i <= a; i += 1 ) 
    {
        printf("\n%d", i ) ;
    }
for ( i = a - 1; i >= 0; i-- )
    {
        printf("\n%d", i ) ;
    }
}
