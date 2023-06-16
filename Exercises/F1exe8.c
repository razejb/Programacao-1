#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{

int n, n1, n2, n3 ;

printf( "Numero: " ) ; scanf( "%d", &n ) ;

n1 = n / 100 ;
printf( "%d", n1 ) ;

n2 = n % 100 ;
n2 = n2 / 10 ;
printf( "\n%d", n2 ) ;

n3 = n % 10 ;
printf( "\n%d", n3 ) ;




}
