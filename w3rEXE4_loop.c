#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


int main()
{
    int sum = 0, i = 1, n = 0;

    printf("Insira um número: ") ;
    scanf( "%d", &n ) ;

   while( i <= n )
    {
        char sym = i == n ? '=' : '+' ;
        printf( " %d %c ", i, sym ) ;
        sum = sum + i ;
        i++ ; 
    }
    printf( "%d", sum ) ;
    float avg = sum / n ;
    printf( "\nMédia: %.2f", avg ) ;




}
