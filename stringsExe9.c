#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>
#include <cstring>




/*
Implemente a função int ocorrencias2(char letra, char string[], int indice) que
conta o nº de vezes que letra aparece na string. indice indica o índice a partir do qual a
contagem deve ser feita. Por exemplo, a chamada da função ocorrencias2('u', "aula", 2)
deve devolver 0.
*/ 

int ocorrencias2(char letra, char string[], int indice) ;

MAIN()
{   
    char s[] = "Joao" ;

    printf("%d", ocorrencias2('o', s, 2)) ;
}

int ocorrencias2(char letra, char string[], int indice)
    {   
        int i = 0;
        int count = 0 ;
        for(i = indice; string[i] != '\0'; i++ )
            {
                if(string[i] == letra )
                    count++ ;
            }
        return count ;
    }






