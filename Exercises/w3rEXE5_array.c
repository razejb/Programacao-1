#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int ctr = 0, m = 1, n = 0 ; 
    int i = 0, j = 0 ;

    int elements[100] ;
    int elementsV2[100] ;
    int elementsV3[100] ;

   puts ( "Test Data: " ) ;
   puts ( "Input the number of elements to be stored in the array : " ) ;
   scanf ( "%d", &n ) ;

   puts ( "\n---------------------------------------------------------\n" ) ;

   printf ( "Input %d elements in the array : \n\n", n ) ;


    while ( n > i ) 
        {
            printf ( "element - %i : ", i ) ;
            scanf ( "%d", &elements[i] ) ;
            i++ ;
        }

//copy in other array--------------------------------------------------------------

   for ( i = 0; i < n; i++ )
    {
        elementsV2[i] = elements[i] ;
        elementsV3[i] = 0 ;
    }

//mark the elements are duplicate--------------------------------------------------

   for ( i = 0; i < n; i++ )
    {
        for ( j = 0; j < n; j++ ) 
            {
                if ( elements[i] == elementsV2[j] )
                {
                    elementsV3[j] = m ;
                    m++ ;
                }
            }
            m = 1 ;
    }

//prints the array------------------------------------------------------------------

for ( i = 0;  i < n; i++ )
    {
        if ( elementsV3[i] == 2 ) {ctr++ ; } 
    }
    printf ( "The total number of duplicate elements found in the array is: %d \n", ctr ) ;
    
        
}