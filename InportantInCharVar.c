#include <stdio.h>
#include <stdlib.h>

int main(){

    
    char ch1, ch2 ;
    printf ( "Introduza um Carácter: ") ;
    scanf ( "%c", &ch1 ) ;
    printf ( "Introduza outro Carácter: " ) ;
    scanf ( " %c", &ch2 ) ;
    printf ( "Os caracteres introduzidos foram '%c' e '%c' que é '%d' em ASCII \n", ch1, ch2, ch2 ) ;
}