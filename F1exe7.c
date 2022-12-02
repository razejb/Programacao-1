#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{

float real ;
char caracter ;
int inteiro ;




printf( "Caracter: " ) ; caracter = getchar() ;

printf( "Real: " ) ; scanf ( "%f", &real ) ;

printf( "Inteiro: " ) ; scanf ( "%d", &inteiro ) ;

printf( "%d %c %.2f", inteiro, caracter, real ) ;





}
