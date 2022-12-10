#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>
#include <cstring>


/*
Exe4 apontadores
*/ 

int main()
  {
    int i, j, *p1, *p2, **pp1, **pp2;
    i = 4;
    j = 5;
    p1 = &i;
    p2 = &j;
    pp1 = &p2;
    pp2 = &p1;

    printf("Valor de i = %d\n", i) ;
    printf("Endereço de i = %p\n", &i) ;
    printf("Valor apontado por p1 = %d\n", *p1) ;
    printf("Valor do endereço do apontador p1 = %p\n", &p1) ;
    printf("Valor apontado por pp1 %d\n", **pp1) ;
    printf("Valor do endereço por pp1 %p\n", &pp1) ;

    puts("\n\n") ;
    printf("Valor de j = %d\n", j) ;
    printf("Endereço de j = %p\n", &j) ;
    printf("Valor apontado por p2 = %d\n", *p2) ;
    printf("Valor do endereço do apontador p2 = %p\n", &p2) ;
    printf("Valor apontado por pp2 = %d\n", **pp2) ;
    printf("Valor do endereço por pp2 = %p\n", &pp2) ;
  }






