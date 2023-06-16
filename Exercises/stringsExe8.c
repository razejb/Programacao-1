#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>
#include <cstring>




/*
Implemente a função int ocorrencias(char letra, char string[]) que conta o nº de
vezes que letra aparece em string. Por exemplo, a chamada da função ocorrencias("aula")
deve devolver 2
*/ 

int ocorrencias(char letra, char string[]) ;

MAIN()
{   
    char s[] = "Joao" ;
    printf("%d", ocorrencias( 'o', s)) ;
}

int ocorrencias(char letra, char string[])
{
    int count = 0;
   for(int i = 0; string[i] != '\0'; i++)
    {
        if(string[i] == letra)
            count++ ;
    }
    return count ;
}






