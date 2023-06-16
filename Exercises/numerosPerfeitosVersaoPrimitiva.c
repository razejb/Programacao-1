#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>




int main()
{

int n, np ;

    for ( n = 0; n <= 10; n++ )
        {
    
            if ( n == 2 ) 
                {
                   np = 2 * ( 4 - 1 ) ;
                    printf( "%d\n", np ) ;
                }
            else if ( n == 3 )
                {
                    np = 4 * ( 8 - 1 ) ;
                    printf( "%d\n", np ) ;
                }
            else if ( n == 5 )    
                {
                    np = 16 * ( 32 - 1 ) ;
                    printf( "%d\n", np ) ;
                }
                else
                {
                    continue;
                } 
        }   
}
