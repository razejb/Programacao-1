#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>
#include <cstring>


/*
Strings Example
*/ 

int main()
  {
    char myString[] = "My name is Joao" ;

    printf("The length of this string is %d", strlen(myString)) ; 
    //'strlen' get the length of a string

    putchar('\n') ;
    char temp[50] ;

    strncpy(temp, myString, sizeof(temp) - 1) ; 
    //'sizeof' see how many bytes inside character
    //'strncpy' copying one string character to another
    printf("The string is: %s", temp) ;

    putchar('\n') ;
    char source[50], destination[50] ;
    
    strcpy(source, " This is source") ;
    strcpy(destination, "This is destination") ;    

    strncat(destination, source, 15) ;
    //'strncat' combining two character strings together(concatenation)
    printf("Final destination string: |%s|", destination) ;

    /*Another example*/
    putchar('\n') ;
    strcpy(source, "My name") ;
    strcpy(destination, " is Joao") ;

    strncat(source, destination, 15) ;
    printf("Final destination string: ~ %s ~", source) ;

    
    return 0 ;
  }






