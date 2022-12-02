#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>


MAIN()
{

int a, b, c ;
   a = atoi( argv[1] ) ; 
   b = atoi( argv[2] ) ;
   c = atoi( argv[3] ) ;
printf("Os três valores inseridos foram: \n%d\n%d\n%d", a, b, c) ;
if ( (a < b && b < c) || (a > b && b > c) )
   {
      printf("\nDos três valores (%d, %d, %d) o valor do meio é o %d ", a, b, c, b) ;
   }
else if ( (b < a && a < c) || (b > a && a > c) )
   {
      printf("\nDos três valores (%d, %d, %d) o valor do meio é o %d ", a, b, c, a) ;
   }
else if ( (a < c && c < b) || (a > c && c > b) )
   {
      printf("\nDos três valores (%d, %d, %d) o valor do meio é o %d ", a, b, c, c) ;
   }
}
