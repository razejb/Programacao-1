#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MONTHS 12

int main(){
    

    int days[MONTHS] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 } ;
    int index ;

    for ( index = 0; index < MONTHS; index += 1 ) ;
        printf ( "Month %d has %2d days.\n", index + 1, days[index] ) ;
    


return 0 ;        

}