#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>


MAIN()
{
float altura ;

altura = atof( argv[1] ) ;
printf("Insira a altura  do meliante: %.2f\n", altura ) ;

if(altura < 1.3 && 1.3 > altura ) 
    {
        printf( "És baixissimo, pareces um japonês" ) ;
    }
else if( altura >= 1.3 &&  altura < 1.6 )
    {
        printf("És baixo, se fosse a ti comia mais sopa") ;
    }
else if( altura >= 1.6 && altura < 1.75  )
    {
        printf( "És mediano, mete mais uns filetes pra dentro  e chegas lá " ) ;
    }
else if( altura >= 1.75 && altura < 1.9f )
    {
        printf( "És alto, bacano, bom para ti" ) ;
    }
else if( altura >= 1.9f )
    {
        printf( "És altissimo, parabéns. " ) ;
    }

}
