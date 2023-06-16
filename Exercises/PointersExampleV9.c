#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>
#include <cstring>


/*
Pointer Example
*/ 


int main(void)
  {
    char s[100] ;
    char *ptr = s; //Aponta para o primeiro caracter de s

    printf("Introduza uma String: ") ; scanf("%s", s) ;
    if(*ptr == '\0')/*<- Sting Vazia*/ return 0;

    /* Imprimir a string Normalmente */
      while (*ptr != '\0')
      {
        putchar(*ptr++) ;
      }

      putchar('\n') ;
      /* Imprimir a string ao contrário */
      ptr-- ; /*Por causa do '\0'*/
      
      while (ptr >= s)  //Enquanto ptr for >= que s[0]
      {
        putchar(*ptr--) ;
      }
      




    
  }





