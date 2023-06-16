// ---Realizado por: João Santos---

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>
#include <cstring>




/*
Apredizations

A função int palindromo(char str[]) devolve 1 se str for um palíndromo e 0 caso contrário.

    int palindromo(char str[]){
        int i, sz;
        sz = <a>;
        for(i = 0; i < sz / 2; <b>){
            if(str[i] != str[<c>])
                return <d>;
        }
        return <e>;
    }

  */

int palindromo(char str[]);

MAIN()
{  
 char string[] = "hello" ;
 printf("%d", palindromo(string)) ;
 
}


  int palindromo(char str[]){
        int i, sz;
        sz = strlen(str);
        for(i = 0; i < sz / 2; i++){
            if(str[i] != str[sz - i -1])
                return 0;
        }
        return 1;
    }







