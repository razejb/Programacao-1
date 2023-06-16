#include <stdio.h>
#include <stdlib.h>

int main(){

unsigned long long sum = 0 ;
unsigned int count = 0 ;

printf ( "\n Enter the number of integers you want to sum: " ) ;
scanf ( " %u", &count ) ;

for ( unsigned int i = 1 ; i <= count ; ++i )
{
printf ( "inside loop |" ) ;
sum += i ;
}
printf ( "\n Total of the first %u numbers is %llu\n", count, sum ) ;

return 0 ;


}