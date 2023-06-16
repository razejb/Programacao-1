#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>
#include <cstring>




/*
Implemente a função int tamanho(char s[]) que devolve o tamanho da string s
*/ 

int tamanho(char s[]) ;
MAIN()
{
    char string[50] ;
    puts("Insira uma string SEM espaços até 50 characteres.\n") ; scanf("%s", string) ;

    printf("O tamanho da string '%s' é %d",string, tamanho(string)) ;
    
}

int tamanho(char s[])
    {   
        int i ;
        for(i = 0; s[i] != '\0'; i++)
            {
                i++ ;
            }
        return i ;
    }




