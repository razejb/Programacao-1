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

A biblioteca standard do C inclui uma função strlen que determina o comprimento de uma string (número de caracteres).

Neste problema vamos implementar uma função length, que tem exactamente a mesma funcionalidade mas 
com um nome diferente para não confundir as duas implementações. 

O protótipo da função é o seguinte:

    int length(char s[]);

Uma string pode conter letras, números, símbolos ou caracteres invisíveis como espaços, tabs e newlines. 
A string "hello\nWORLD!" tem no total 12 caracteres: 5 em hello, 1 newline \n, 5 em WORLD e 1 exclamação !. 
O carácter nulo \0 não conta como parte do texto. Uma string vazia "" é composta por um único carácter nulo '\0' e tem comprimento zero.


  */

int length(char s[]) ;

MAIN()
{  
   char string[] = "hello\nWORLD!" ;
   printf("%d", length(string)) ;
}

int length(char s[])
    {
        int i;
        for(i=0; s[i] != '\0'; i++)
            {
            }
            return i;
    }







