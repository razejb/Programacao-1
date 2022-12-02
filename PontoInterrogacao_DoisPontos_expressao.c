#include <stdio.h>
#include <stdlib.h>

int main(){

float salario = 0.00 ;
 


printf ( "Insira o salario: " ) ;
scanf ( "%f", &salario ) ;


  salario = salario > 1000 ? salario * 1.05 : salario * 1.07 ;
  printf ( "Salário aumenta para: %.2f", salario ) ;
  




  


}