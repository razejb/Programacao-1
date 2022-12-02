#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

float sal[12] ; //12 meses
float total ;
int i ;

/*i = 0 ;

while ( i < 12 )
   {
      printf ( "Introduza o salário do mes %d: ", i + 1 ) ;
      scanf ( " %f", &sal[i] ) ;
      i += 1 ;
   }

   /* Mostrar os valores Mensais e calcular o total */
  /* i = 0 ; total = 0.0 ;
   puts ( " Mes        Valor " ) ;
   while ( i < 12 )
      {
         printf ( "%3d     %9.2f\n ", i + 1, sal[i] ) ;
         total += sal[i] ;
         i++ ;
      }
   printf ( "Total Anual: %9.2f\n", total ) ;*/

   for ( i = 0 ; i < 12 ; i += 1 ) 
      {
         printf ( "Introduza o salário do mês %d: ", i + 1 ) ;
         scanf ( "%f", &sal[i] ) ;
         
      }

   puts ( " Mes        Valor" ) ;
   for ( i = 0, total = 0.0; i < 12; i++ )
      {
         printf ( "%3d    %9.2f\n", i + 1, sal[i] ) ;
         total += sal[i] ;
      
      }
   printf ( "Total Anual: %9.2f\n", total ) ; 

return 0 ;        

}