#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>


MAIN()
{
    int i = 1, n = 0;

    n = atoi(argv[1]) ;
    

    
    while ( n > 0 )
    {
        
        i = i * n;
        --n ;
        
    }
    printf("O fatorial é: %d", i) ;
            
}
