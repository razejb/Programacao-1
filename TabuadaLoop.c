#include <stdio.h>
#include <stdlib.h>

int main(){

int count, num;

num = 1 ;
while (num <= 5 ) 
{
    count = 1 ;
    while ( count <= 10 ) 
    {
        printf ( "%d\n", count * num ) ; 
    
        count = count + 1 ;
    }
    printf ( "\nTabuada do %d \n\n", num ) ; 
    printf ("\n--------------------------\n" ) ;

    num = num + 1 ;
}
return 0 ;


}