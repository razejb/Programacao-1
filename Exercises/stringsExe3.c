#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>
#include <cstring>




/*
Implemente a função void letras_inv(char s[]) que recebe uma string como argumento
e escreve as letras por ordem inversa (do fim para o início). Por exemplo, a chamada da
função letras_inv("Aula") deve mostrar:

    a
    l
    u
    A
*/ 

void letras_inv(char s[]) ;
int count( char s[] ) ;

MAIN()
{
    char string[50] ;

    puts("Insira uma string SEM espaços até 50 characteres.\n") ; scanf("%s", string) ;

    letras_inv( string ) ;
    
}

void letras_inv(char s[]) 
    {
        int i, tamanho ;
        tamanho = count(s) ;
        for(i = tamanho; i >= 0; i--)
        {
            printf("%c\n", s[i]) ;
        }
    }

int count( char s[] )
    {   
        int i = 0 ;
        for( i; s[i] != '\0'; i++)
            {
                i++ ;
            }
            return i;
    }







