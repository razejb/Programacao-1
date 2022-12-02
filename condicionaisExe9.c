#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>


MAIN()
{

int x = 0, y = 0 ;

x = atoi(argv[1]) ;
y = atoi(argv[2]) ;

printf(" 2 | 1\n -----\n 3 | 4") ;

puts("\n") ;

if( x > 0 && y > 0 )
    {
        printf("O ponto (%d, %d) encontra-se no quadrante 1", x, y) ;
    }
else if( x > 0 && y < 0 )
    {
        printf("O ponto (%d, %d) encontra-se no quadrante 4", x, y) ;
    }
else if( x < 0 && y > 0 )
    {
        printf("O ponto (%d, %d) encontra-se no quadrante 2", x, y) ; 
    }
else if( x < 0 && y < 0 )
    {
        printf("O ponto (%d, %d) encontra-se no quadrante 3", x, y) ;
    }



}
