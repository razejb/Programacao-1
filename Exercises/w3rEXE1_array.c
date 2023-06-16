#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{

int i = 0 ;
int elements[10];

puts ( "Test Data: " ) ;
puts ( "Input 10 elements in the array: " ) ;
for ( i; i <= 10; ++i ) 
  {
   printf ( "element - %d : ", i ) ;
   scanf ( "%d", &elements[i] ) ;
  }
for ( i = 0; i < 10; i++ )
  {
    printf ( "%d  ", elements[i] ) ;
  }
  printf ( "\n" ) ;
}