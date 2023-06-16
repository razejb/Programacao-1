#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


int main()
{
    int sum ;
    for ( int i = 1; i <= 10; i++  ) {
        char sym = i==10?'=':'+' ;
        printf( "%d %c ", i, sym ) ;
        sum = sum + i ;
    }
    printf ( "%d\n", sum ) ;




}
