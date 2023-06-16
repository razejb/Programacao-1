#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> 

int main()
{

    int p ;
    int i ;

    int prime[50] = {0} ;
    int primeIndex = 2 ;

    bool isPrime ;


    //hardcode prime numbers
    prime[0] = 2 ;
    prime[1] = 3 ;

    for ( p = 5; p <= 100; p = p + 2 )
        {
            isPrime = true ;

            for ( i = 1; isPrime && p / prime[i] >= prime[i]; ++i )
                if ( p % prime[i] == 0 )
                isPrime = false ;

                if ( isPrime == true )
                    {
                        prime[primeIndex] = p;
                        ++primeIndex ;
                    }
        }
        for ( i = 0; i < primeIndex; ++i )
        printf( "%i   ", prime[i] ) ;

        printf( "\n" ) ;
        

    return 0 ;

}