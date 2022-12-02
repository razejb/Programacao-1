#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>

void minimo(int a, int b, int c) ;
  
MAIN()
  {
    int n1, n2, n3 ;

    n1 = atoi(argv[1]) ;
    n2 = atoi(argv[2]) ;
    n3 = atoi(argv[3]) ;

    printf("O menor valor é: ") ;
    minimo(n1, n2, n3) ;
    
  }

void minimo(int a, int b, int c)
  {
  
    if((a <= b) && (a <= c))
      printf("%d", a) ;

    else if ((b <= a) && (b <= c))
      printf("%d", b) ;

    else if((c <= a) && (c <= a))
      printf("%d", c) ;
  }


  
  

  



