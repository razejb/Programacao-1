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


int strlen(char *s) ; /*Protótipo da função*/

int main(void)
  {
    char s[100] ;
    char *ptr = s; //Aponta para o primeiro caracter de s

    printf("Introduza uma String: ") ; scanf("%s", s) ;

    printf("%d\n", strlen(s)) ;
  }


int strlen(char *s)
  {
    char *ptr = s;        //Guardar o endereço inicial
    while (*s != '\0')    //Enquanto não chegarmos ao fim
    {                     
      s++ ;               //Incrementar o apontador
    }
    
    return (int)(s-ptr) ;//Devolve a diferença entre os endereços
  }




