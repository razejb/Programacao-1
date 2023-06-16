#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>
#include <cstring>




/*
Implemente a função void letras(char s[]) que recebe uma string como argumento e
escreve uma letra por linha. Implemente uma versão com ciclo while e outra com ciclo
for. Por exemplo, a chamada da função letras("Aula") deve mostrar:

    A
    u
    l
    a
*/ 

void letrasV1(char s[]) ;
void letrasV2(char s[]) ;

MAIN()
{

    char string[50] ;
    puts("Insira uma string SEM espaços até 50 characteres.\n") ; scanf("%s", string) ;
    puts("") ;

    letrasV1(string) ;
    putchar('\n') ;
    letrasV2(string) ;
}

void letrasV1(char s[])
    {
        int i = 0 ;
        while (s[i] != '\0')
        {
            printf("%c\n", s[i]) ;
            i++ ;
        }
        
    }

void letrasV2(char s[])
    {
        for(int i = 0; s[i] != '\0'; i++)
            {
            printf("%c\n", s[i]) ;
            }
    }






