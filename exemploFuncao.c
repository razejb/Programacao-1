#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> 


void astericos()
{
    int i ;

    for ( i = 0; i <= 20; i++ ) 
    
        putchar( '*' ) ;
    putchar( '\n' ) ;
    
}

int main()
{
    int i ;
    //Escrita do cabeçalho

    astericos() ;

    puts ( " Números entre 1 e 5" ) ;

    astericos() ;
    for ( i = 1; i <= 5; i++ )
        {
            printf( "%d\n", i ) ;
        }
    astericos() ;
    
    
    return 0 ;

}

