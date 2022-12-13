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

A função conta_vogais() devolve o número de vogais existente na string str.

  int conta_vogais( <a> ){
      int count=0, i=0;
      while ( str[i] != <b> ) {
          if( <c> == 'a' <d> <c> == 'e' <d> <c> == 'i' <d> <c> == 'o' <d> <c> =='u' )
              count++;
          <e>;
      }
      return count;

  }
  */

int conta_vogais( char str[] ) ;


MAIN()
{  
  char string[] = "Joao" ;
  printf("%d", conta_vogais(string)) ;
}

int conta_vogais( char str[] ){
      int count=0, i=0;
      while ( str[i] != '\0' ) {
          if( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] =='u' )
              count++;
          i++;
      }
      return count;
}






