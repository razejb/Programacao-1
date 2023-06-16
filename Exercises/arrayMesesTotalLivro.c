#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>

float guardameses(int i) ;

MAIN()
  {
    float meses[12] ;
    float sum ;
    
    for(int i = 1; i <= 12; i++)
      {
        meses[i] = guardameses(i) ;
      }

    puts("\n\n") ;

  printf("Jan\tFev\tMar\tAbr\tMai\tJun\tJul\tAgo\tSet\tOut\tNov\tDez\n") ;
    for(int i = 1; i <= 12; i++) 
    printf("%3.1f\t", meses[i]) ;

  printf("\n\nTotal: %.2f€", sum) ;
  }

float guardameses(int i)
    {
        float valor;
        printf("%dº mes> ", i) ;
        scanf("%f", &valor) ;

        return valor ;
    }

  
  

  



