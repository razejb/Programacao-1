#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

int n = 0 ;
int i = 0 ;
int elements[100] ;

puts ( "Test Data: " ) ;
printf ( "Input the number of elements to store in the array: " ) ;
scanf ( "%d", &n ) ;

puts ( "\n---------------------------------------------------" ) ;

printf ( "Input %d number of elements in the array: \n", n ) ;



puts ( "\n" ) ;

while ( i < n ) 
    {
        printf ( "element - %d : ", i ) ;
        scanf( "%d", &elements[i] ) ;
        ++i ;
    }

puts ( "The values store into array are: " ) ;
for ( i = 0; i < n; i++ )
    {
        printf ( "%d  ", elements[i] ) ;
    }
    
    printf ( "\n" ) ;

puts ( "The values store in the array reverse are: " ) ;

i = n - 1 ;
while ( i >= 0 ) 
    {
        printf ( "%d  ", elements[i] ) ;
        i-- ;
    }
    printf ( "\n\n" ) ;

return 0 ;
}