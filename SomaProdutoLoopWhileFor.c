#include <stdio.h>
#include <stdlib.h>

int main(){

int produto = 1, n = 1, num, soma = 0 ;


printf ( "Introduza os 'n' números naturais: " ) ; scanf ( "%d", &num ) ;

while ( n <= num ) 
    {
        printf ( "%d\n", n ) ;
        soma = soma + n ;
        produto = produto * n ;
        n = n + 1 ;
        
    }
    printf ( "Soma: %d\n Produto: %d\n", soma, produto ) ;






/*printf ( "Introduza os 'n' números naturais: " ) ; scanf ( "%d", &num ) ;

for ( soma = 0 , n = produto = 1 ; n <= num ; n = n + 1 ) 
{
    soma = soma + n ;
    produto = produto * n ;
    
}
printf ( "Soma: %d\nProduto: %d\n", soma, produto  ) ;
*/

}