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
    char str[80] = "Hello how are you - my name is - Joao" ;
    const char s[2] = "-" ;
    char *token ;

    /*get the first token*/
    token = strtok(str, s) ;
    //a 'token' is a sequence of characters within a string that is bound by a delimiter

    /*walk through other tokens*/
    while(token != NULL)
      {  
        printf("%s\n", token) ;

        token = strtok(NULL, s) ;
      }
      
    return 0 ;
  }






