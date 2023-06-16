#include <stdio.h>
#include <stdlib.h>

int main(){

float salario = 0.00 ;
 char estCivil ;


printf ( "Insira o salario: " ) ;
scanf ( "%f", &salario ) ;

//Para ser lido, atenção ao espaço em branco!
printf ( "Insira o seu Estado Civil: " ) ;
scanf ( " %c", &estCivil ) ;
       //^//

 if ( estCivil == 'C' || estCivil == 'c' )
  {
    printf ( "Imposto: %.2f", salario * 0.09 ) ;
  }
else if ( estCivil == 'S' || estCivil == 's' ) 
  {
    printf ( "Imposto: %.2f", salario * 0.10 ) ;
  }
else
  {
    printf ( "Erro" ) ;
  }


  


}