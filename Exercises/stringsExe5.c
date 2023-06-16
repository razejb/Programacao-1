#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>
#include <cstring>




/*
Implemente a função void espelho(char s[]) que recebe uma palavra e que a imprime
seguida do seu reverso. Por exemplo, a chamada da função espelho("Aula") deve mostrar

AulaaluA.
*/ 

void espelho(char s[]) ;

MAIN()
{
   char string[] = "Aula" ;
   espelho(string) ;
}

void espelho(char s[])
    {
        int i, count = 0;
        for(i = 0; s[i] != '\0'; i++)
            {
                printf("%c", s[i]) ;
                
                
            }
        
        for(i -= 1; i >= 0; i--)
            {
                printf("%c", s[i]) ;
            }
    }






