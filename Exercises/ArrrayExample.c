#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int grades[10] ;
int count = 10 ;
long sum = 0 ;
float average = 0.00f;

puts ( "\nEnter the 10 grades: \n" ) ;

int i = 0;
/*for ( i = 0; i < count;  ++i )
{
    printf ( "%2u> ", i + 1 ) ;
    scanf ( "%d", &grades[i] ) ;  //Read a grade
    sum += grades[i] ;            //Add it to sum
}*/

while ( i < count )
    {
        printf ( "%2u> ", i + 1 ) ;
        scanf ( "%d", &grades[i] ) ;
        sum += grades[i] ;
        i++ ;
    }

average = (float)sum/count;

printf ( "\nAvearege of the ten grades entered is: %.2f\n", average ) ;

return 0 ;        

}