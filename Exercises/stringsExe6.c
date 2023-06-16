#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>
#include <cstring>




/*
Um palíndromo é uma palavra que é escrita da mesma forma da esquerda para a direita
ou da direita para a esquerda; 

Por exemplo ”aia” e ”noon”. 

Implemente a função int palindromo(char s[]) que indica se a string s é um palíndromo ou não. 
(use a dica do ex. 3)
*/ 

int palindromo(char s[]) ;
int count(char s[]) ;

MAIN()
{
   char string[] = "noon" ;
    printf("%d", palindromo(string)) ;
}


int palindromo(char s[])
    {
        int i;
        int j = count(s) - 1 ;
        for(i=0; s[i] != '\0'; i++)
            {
                printf("%c", s[i]) ;
                if( s[i] != s[j] ){
                    return 0;
                }
            j--;
            }
            return 1;
    }

int count(char s[])
{
    int i ;
    for(i = 0; s[i] != '\0'; i++ );
        
        
        return i ;
}





