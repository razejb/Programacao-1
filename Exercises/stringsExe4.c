#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>
#include <cstring>




/*
Implemente a função void sub_cadeia(char s[]) que imprime a string numa escala in-
vertida. Por exemplo, a chamada da função sub_cadeia("Aula") deve mostrar:

    Aula
    Aul
    Au
    A
*/ 
int count(char s[]) ;
void sub_cadeia(char s[]) ;

MAIN()
{
   char string[] = "Aula" ;
   printf("%d", count(string)) ;
    
    putchar('\n') ;
    sub_cadeia(string) ;
}

void sub_cadeia(char s[])
{
    int n, i = 0, j, quantidade;
    n = count(s) ;
    quantidade = n ;

    for(j = 0; j < quantidade; j++)
        {
        for(i = 0; i < n; i++)
            {
                printf("%c", s[i]) ;
   
            }
             n = n - 1 ;
            puts("") ;
        }
}

int count(char s[])
{
    int i ;
    for(i = 0; s[i] != '\0'; i++ )
        {
            i++ ;
        }

        return i ;
}





