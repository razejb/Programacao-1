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
    char buf[100] ;           //Input Buffer
    int nLetters = 0 ;          //Number of letters input
    int nDigits = 0 ;           //Number of digits input
    int nPunct = 0 ;            //Number of pontuation characters

    printf("Enter an interesting string of less than %d characters: \n", 100) ;
    scanf("%s", buf) ;         //Read a string into buffer

    int i = 0 ;                //Buffer index
    while (buf[i])
    {
      if(isalpha(buf[i]))
        ++nLetters ;          //Increment letter count
      else if(isdigit(buf[i]))
        ++nDigits ;           //Increment digit count
      else if(ispunct(buf[i]))
        ++nPunct ;
      ++i ;
    }

    printf("\nYour string contained %d letters, %d digits and %d punctuation character\n", nLetters, nDigits, nPunct ) ;
    return 0;
    
  }






