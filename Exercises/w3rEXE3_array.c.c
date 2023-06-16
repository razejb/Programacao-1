#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n = 0, i = 0, sum = 0 ;
    int elements[100] ;
    

puts ( "Test Data: " ) ;
printf ( "Input the number of elements to be stored in the array : " ) ;
scanf ( "%d", &n ) ;

puts ( "\n--------------------------------------------------------\n" ) ;
printf ( "Input %d elements in the array : \n\n", n ) ;

while ( i < n )
    {
        printf ( "element - %d : ", i ) ;
        scanf ( "%d", &elements[i] ) ;
        sum += elements[i] ;
        i++;
    }

    puts ( "\n" ) ;
    printf ( "-> Sum of all elements stored in the array is : %d", sum ) ;
return 0 ;
}