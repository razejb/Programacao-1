#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>
#include <cstring>




/*
Implemente as seguintes funções sobre strings:
(a) int vogal(char c): verifica se o argumento é uma vogal.

(b) int conta_vogais(char s[]): devolve o número de vogais existentes na string recebida como 
argumento. Utilize a função definida no ponto anterior.
*/ 

int vogal(char c) ;
int conta_vogais(char s[]) ;

MAIN()
{   
    char v, string[50];
    puts("Insira uma vogal(1 = true, 0 = false): ") ; v = getchar() ;
    printf("%d\n", vogal(v) ) ;
    
    putchar('\n') ;
    puts("Insira uma string: ") ; scanf("%s", string) ;

    
    printf("%d", conta_vogais(string)) ;
}

int vogal(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return 1 ;
    else
        return 0 ;
}

int conta_vogais(char s[])
    {
        int count = 0 ;
        for(int i=0; s[i] != '\0'; i++)
            {
                if(vogal(s[i]) == 1)
                    count++ ;
            }
        return count;
    }




