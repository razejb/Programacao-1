#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


int main()
{
    int n = 0 ;
printf( "Insira um número: " ) ;
scanf( "%d", &n ) ;

for ( int i = 1; i <= n; i++ )
    {
        printf( "\nO número é %d e o cubo é: %d", i, i * i * i ) ;
    }

    return 0 ;
}
