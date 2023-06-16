#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>
#include <cstring>

/*
Pointers Example
*/ 


int main(void)
  {
    //É necessário um apontador ser incializado como NULL(0x0), significa que não irá estar a apontar para nada
    char *str = NULL;

    //Inicio da alocação da memória
    str = (char *)malloc(15*sizeof(char)) ;
    //Ao usar malloc, estamos a alocar memória, neste caso, 15 espaços de caracteres, 
    //como existe diferenças de Hardware multiplica-se pelo sizeof

    strcpy(str, "projectD") ;
    printf("String = %s, Address= %p\n", str, str) ;

    //Realocar a memória
    str = (char *)realloc(str, 25*sizeof(char)) ;
    //Ao usar realloc, estamos a realocar memória, neste caso, 15 passa para 25 espaços de caracteres
    //novamente, como existe diferenças de Hardware multiplica-se pelo sizeof

    strcat(str, ".com") ;
    printf("String = %s, Address = %p\n", str, str) ;


    free(str) ;
    //'free'serve para libertar a memória, quanto menos memória alocada melhor, o programa melhor na eficiência

    return 0 ;
  }





