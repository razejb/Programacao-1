#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>


MAIN()
{
    int i = 1, semana = 0, combustivel = 0, litros = 0 ;
    float preco95=1.9, preco98=1.95, precoGasoleo = 2.00 ;

    semana = atoi(argv[1]) ;
    combustivel = atoi(argv[2]) ;
    litros = atoi(argv[3]) ;

   
    //for( i = 1; i <= semana; i += 1 )
    while(i <= semana)
        {
            preco95 = preco95 + (0.05 * 1.90) ;
            preco98 = preco98 + (0.05 * 1.95) ;
            precoGasoleo = precoGasoleo + (0.05 * 2.00) ;
            i++ ;
        }

    if ( combustivel == 1 )
        {
            printf(" gasolina 95 atualmente é: %.3f", preco95 * litros ) ;         
        }
    else if (combustivel == 2 )
        {
            printf( "gasolina 98 atualmente é: %.3f", preco98 * litros ) ;
        }
    else if (combustivel == 3 )
        {
            printf( "Gasóleo atualmente é: %.3f", precoGasoleo * litros ) ;
        }    
            
        
            
}
