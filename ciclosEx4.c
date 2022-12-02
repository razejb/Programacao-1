#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>


MAIN()
{
    
    int a, b, i = 0 ;
    int valor = 0 ;
    int soma = 0;
    float media = 0 ;
    
   

    
        do
            {
                
                printf("\nInsira o %d  valor? ", i + 1) ;
                scanf("%d", &valor) ;
                
                soma += valor ;
                i++ ;                            
            }
        
           while(valor != 0) ;

        media = (float)soma / (float)(i - 1) ;
        
        

        printf("Soma = %d", soma) ;
        printf("\nMedia = %.2f", media) ;
        

}
