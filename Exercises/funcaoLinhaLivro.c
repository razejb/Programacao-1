#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>

void linha(int num, char l) ;


MAIN()
  {
    
    linha(3, '+') ;
    linha(5, 'n') ;
    linha(7, '*') ;
    linha(5, 'n') ;
    linha(3, '+') ;
  }

void linha(int num, char l)
  {
    for(int i = 1; i <= num; i++)
      {
        putchar(l) ;
      }
      putchar('\n') ;
  }
  
  

  



