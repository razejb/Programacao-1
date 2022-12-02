#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n = 0, i = 0 ;
    int elements[100] ;
    int elementsV2[100] ;

  puts ( "Test Data: " ) ;
  printf ( "Input the number of elements to be stored in the array : " ) ;
  scanf ( "%d", &n ) ;

  puts ( "\n---------------------------------------------------------\n" ) ;
  printf ( "Input %d elements in the array : \n\n", n ) ;

  for ( i; i < n; i++ ) 
    {
        printf ( "element - %d : ", i ) ;
        scanf ( "%d", &elements[i] ) ;
    }

    for ( i = 0; i < n; i++ )
        {
            elementsV2[i] = elements[i] ;
        }

    puts ( "\n" ) ;
    puts ( "The elements stored in the first array are : " ) ;
        
    for ( i = 0; i < n; i++ ) 
        {
            printf ( "%d  ", elements[i] ) ;
        }

    puts ( "\n" ) ;
    puts ( "The elements copied into the second array are : " ) ;

    

    for ( i = 0; i < n; i++ )
        {
            printf ( "%d  ", elementsV2[i] ) ;
        }

  
}