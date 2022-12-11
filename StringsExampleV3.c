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
    if(strncmp("astronomy", "astro", 5)  == 0)
    //'strcmp' compares strings
      {
        printf("Found: astronomy") ;
      }

    if(strncmp("astounding", "astro", 5) == 0)
      {
        printf("Found: astounding") ;
      }
    return 0 ;
  }






