#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>


MAIN()
{
   float a = 0, b = 0, c = 0, total1 = 0, total2 = 0, dentroR = 0;

   a = atof(argv[1]) ;
   b = atof(argv[2]) ;
   c = atof(argv[3]) ;

   printf("Os tres valores inseridos para a formula resolvente foram: %.2f, %.2f, %.2f", a, b, c) ;

   dentroR = ((pow(b, 2) - (4 * a * c) ) );
   total1 = (  (-b) + sqrt(dentroR) )   / (2 * a)  ;
   total2 = (  (-b) - sqrt(dentroR) )  / (2 * a)  ;

   printf("\n\ntotal + = %.2f", total1) ;
   printf("\ntotal - = %.2f", total2) ;



}
