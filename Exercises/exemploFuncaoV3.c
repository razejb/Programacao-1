#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> 


void asterisco ( int num ) 
    {
        int i ;
        for ( i = 1; i <= num; i++ )
            putchar ( '*' ) ;
            putchar( '\n' ) ;

    }

int main ()
    {
        asterisco(3) ;
        asterisco(5) ;
        asterisco(7) ;
        asterisco(5) ;
        asterisco(3) ;

        putchar( '\n' ) ;

        asterisco(1) ;
        asterisco(2) ;
        asterisco(3) ;
        asterisco(4) ;
        asterisco(5) ;
        asterisco(4) ;
        asterisco(3) ;
        asterisco(2) ;
        asterisco(1) ;
    }