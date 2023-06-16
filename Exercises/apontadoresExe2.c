#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>
#include <cstring>


/*
Escreva a função void ordena( int *a, int *b, int *c) que recebe 3 valores e ordena-os, 
colocando o menor em a e o maior em c.
*/ 


void ordena( int *a, int *b, int *c) ;

MAIN()
  {
    int n1, n2, n3;
    n1 = atoi(argv[1]) ;
    n2 = atoi(argv[2]) ;
    n3 = atoi(argv[3]) ;
    
    

    ordena( &n1, &n2, &n3) ;
  
  }

void ordena( int *a, int *b, int *c) 
  {
    if(*a <= *b && *a <= *c && *b <= *c) 
      printf("%d %d %d", *a, *b, *c) ;

    else if(*b <= *a && *b <= *c && *a <= *c)
      printf("%d %d %d", *b, *a, *c) ;

    else if(*c <= *a && *c <= *b && *b <= *a)
      printf("%d %d %d", *c, *b, *a) ;

    else if(*c <= *a && *c <= *b && *a <= *b)
      printf("%d %d %d", *c, *a, *b) ;

    else if(*b <= *a && *b <= *c && *c <= *a)
      printf("%d %d %d", *b, *c, *a) ;

    else if(*a <= *b && *a <= *c && *c <= *b)
      printf("%d %d %d", *a, *c, *b) ;


  }




