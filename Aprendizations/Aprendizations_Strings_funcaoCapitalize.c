// ---Realizado por: João Santos---

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>
#include <cstring>
#include <ctype.h>




/*
Apredizations

Pretende-se escrever uma função que converta para maiúscula a primeira letra de cada palavra de uma string. 
Letras minúsculas, algarismos e outros símbolos devem ficar inalterados. 

A conversão é feita in place, isto é, alterando directamente a string original.

Por exemplo, a string "hello world." é convertida em "Hello World.".

O protótipo da função é o seguinte:

    void capitalize(char s[]);

Para ajudar a resolver o problema, pode usar as funções isalpha e toupper declaradas em ctype.h. 
A função isalpha verifica se um carácter é uma letra (minúscula ou maiúscula), e a função toupper 
converte uma letra para maiúscula (pode obter mais informação com o comando man isalpha ou man toupper no terminal).

  */

void capitalize(char s[]);

MAIN()
{  
    char string[] = "hello world" ;

    capitalize(string) ;
}

void capitalize(char s[])
    {
        int i;
       
        for(i=0; s[i] != '\0'; i++ )
            {
                if(isalpha(s[0])) 
                    {
                        s[0] = toupper(s[0]) ;
                        if ( s[i] == ' ' )
                        {
                            
                            s[i + 1] = toupper(s[i + 1]) ;
                        }     
                    }
                    //printf("%c", s[i]) ;
            }
    }









