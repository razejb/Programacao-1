#include <stdio.h>
#include <stdlib.h>

int main(){

   int minutes = 0 ;
   float years = 0.0 ;
   float days = 0.0 ;
   float minutesInYear = 0.0 ;
    
   
    printf( "Introduce the time in minutes: ") ;
    scanf( "%d", &minutes ) ;

    minutesInYear = (60 * 24 * 365) ;
    years = ( minutes / minutesInYear ) ;
    days = ( ( minutes / 60.0 ) / 24.0) ;

    printf ( "%d minutes is approximately %f years and %f days \n", minutes, years, days ) ;

    return 0 ;
}