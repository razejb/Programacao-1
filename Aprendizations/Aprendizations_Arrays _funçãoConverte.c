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

A função int converte(int vec[], int sz) devolve o inteiro (na base 10) composto pelos algarismos em vec, 
sendo o índice 0 a posição do algarismo mais significativo do número. Por exemplo, dado o vector int a[]={1,2,3,4,5}; 
a função converte(a, 5) devolve 12345.

int converte(int vec[], int sz){
    int i, __a__;
    for( __b__; __c__; __d__ )
        __e__ = __f__ * __e__ + __g__;
    return num;
    }
*/ 


int converte(int vec[], int sz) ;

MAIN()
{  
    int a[]= {1,2,3,4,5} ;
   printf("%d", converte(a, 5)) ;
}

int converte(int vec[], int sz)
{
    int i, num = 0;
    for( i = 0; i < sz ; i++ )
        num = num * 10 + vec[i];
        
    return num ;

}








