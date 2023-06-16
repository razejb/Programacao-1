#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>


MAIN()
{
     
int n1, n2, n3, inicial;

n1 = atoi(argv[1]) ;

puts( "Insira um número com 3 algarismos." ) ;
printf("\nNúmero inserido: %d", n1) ;


if ( n1 >= 100 && n1 <= 999 )
    {
        inicial = n1 ;

        n2 = n1 ;
        n3 = n1 ;

        n1 = n1 % 10 ;
        n1 = n1 * 100 ;

        n2 = n2 % 100 ;
        n2 = n2 / 10 ;
        n2 = n2 * 10 ;

        n3 = n3 / 100 ;

        n1 = n1 + n2 + n3 ;

        printf("\nO número invertido é: %d", n1) ;
        printf("\nO capicua é: %d", inicial + n1) ;
    }
else    
    {
        puts ("\nInsira um número com 3 algarismos! ") ;
    }


}
