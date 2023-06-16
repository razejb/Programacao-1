#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>
#include <cstring>




/*
Crie uma função que tem como parâmetro uma frase (string) e conta o número de palavras
dessa frase. Considere que as palavras estão separadas por espaços. 

Por exemplo, conta_palavras("computador caderno e caneta") devolve 4.
*/ 

int conta_palavras(char s[]) ;

MAIN()
{  
    char string[] = "computador caderno e caneta" ;
    printf("%d", conta_palavras(string)) ;
}

int conta_palavras(char s[])
{
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++)
        {
            if(s[i] == ' ')
                count++ ;
        }
        return count + 1;
}







