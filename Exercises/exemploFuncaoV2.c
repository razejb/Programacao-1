#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> 


void asterisco3x()
{
    int i ;

    for ( i = 1; i <= 3; i++ ) 
        putchar('*') ;
        putchar('\n') ;

}

void asterisco5x()
{
    int i = 1 ;

    while ( i <= 5 )
    {
        putchar('*') ;
        i = i + 1 ;
    }
    putchar( '\n' ) ;
}

void asterisco7x()
{
    int i = 1 ;

    for ( i; i <= 7; i += 1 ) 
        {
            putchar( '*' ) ;
        }
        putchar( '\n' ) ;
}

int main()
{
    asterisco3x() ;
    asterisco5x() ;
    asterisco7x() ;
    asterisco5x() ;
    asterisco3x() ;
    
    
}

