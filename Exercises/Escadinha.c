#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int i = 1, j = 1, k = 1, l = 1, m = 1, n = 1, o = 1, p = 1, q = 1, r = 1 ;


//MINHA VERSÃO

/*while ( i <= 10 )
        {
                printf ( "%d", i ) ;
                i++ ;
        }*/

/*for ( i; i <= 1; i++ ) 
        printf ( "%d ", i ) ;

        printf ( "\n" );

for ( j; j <= 2; j++ ) 
        printf ( "%d ", j ) ;

        printf ( "\n" );

for ( k; k <= 3; k++ ) 
        printf ( "%d ", k ) ;

        printf ( "\n" );

for ( l; l <= 4; l++ ) int i ;
    
    for ( i = 1 ; i <= 10 ; i++ ) ;

        if ( i == 60 )


    return 0 ;

for ( n; n <= 6; n++ ) 
        printf ( "%d ", n ) ;  

        printf ( "\n" ); 

for ( o; o <= 7; o++ ) 
        printf ( "%d ", o ) ;

        printf ( "\n" );

for ( p; p <= 8; p++ ) 
        printf ( "%d ", p ) ;

        printf ( "\n" );

for ( q; q <= 9; q++ ) 
        printf ( "%d ", q ) ;

        printf ( "\n" );

for ( r; r <= 10; r++ ) 
        printf ( "%d ", r ) ;   

        puts ( "\n\nESCADINHA! :)" )   ;  */



//-------------
//VERSÃO LIVRO!

for ( i = 1; i <= 10 ; i = i + 1 ) 
        {
           for ( j = 1; j <= 10; j = j + 1  )
           {
                printf ( "%d ", j ) ;
                if ( j == i )
                break ;
           }
           putchar ( '\n' ) ;
        }



return 0;
   

}