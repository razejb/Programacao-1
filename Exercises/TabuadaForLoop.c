#include <stdio.h>
#include <stdlib.h>

int main(){

int i, j ;

for ( i = 1 ; i <= 5 ; i = i + 1 )
    {
        for ( j = 1 ; j <=  10 ; j = j + 1 ) 
            {
                printf ("%d * %d = %d\n", i, j, i * j ) ;
            }
            if ( i != 5 )
                    {
                        printf ( "Prima <ENTER> para continuar ..." ) ;
                        getchar() ;
                    }
    }


}