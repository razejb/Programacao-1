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

A função baum_sweet recebe como parâmetro uma string formada pelos caracteres '0' e '1'. 
A função devolve um valor diferente de 0 se a string contém um bloco de zeros consecutivos de tamanho ímpar, caso contrário devolve 0. 
Por exemplo, baum_sweet("101") retorna 1, enquanto baum_sweet("100100") retorna 0.

  <a> baum_sweet( <b> ){
    int i = <c>;
    int count = <c>;
    int zeros = <d>;
    while( str[i] <e> <f> ){
      if( !zeros <g> str[i]=='0' ){
        zeros = 1;
        count++;
      }
      else if( zeros <g> str[i]==<h> ){
        count++;
      }
      else if( zeros <g> str[i]==<i> ){
        zeros = <j>;
        if( <k> == 1 )
          return 1;
        else
          <l>;
      }
      i++;
    }
    if( <m> == 1 )
      return 1;
    else
      return 0;
  }



  */

int baum_sweet( char str[] ) ;

MAIN()
{  
    char string[] = "101101" ;
    printf("%d", baum_sweet(string)) ;
 
}




  int baum_sweet( char str[] ){
    int i = 0;
    int count = 0;
    int zeros = 0;
    while( str[i] != '\0' ){
      if( !zeros && str[i]=='0' ){
        zeros = 1;
        count++;
      }
      else if( zeros && str[i]== '0' ){
        count++;
      }
      else if( zeros && str[i]== '1' ){
        zeros = 0;
        if( count % 2 == 1 )
          return 1;
        else
          count = 0;
      }
      i++;
    }
    //return count%2 == 1
    if( count%2 == 1 )
      return 1;
    else
      return 0;

  }






