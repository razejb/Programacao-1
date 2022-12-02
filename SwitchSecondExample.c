#include <stdio.h>
#include <stdlib.h>

int main(){

char estCivil ;

puts ( "Introduza o seu Estado Civil: " ) ; estCivil = getchar() ;

switch ( estCivil )
{
  case 'c': 
  case 'C': printf ( "Casado" ) ; break ;
  case 's': 
  case 'S': printf ( "Solteiro" ) ; break ;
  default: printf ( "Não sei" ) ; break ;
  
}




}