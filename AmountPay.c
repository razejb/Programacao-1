#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

int hour = 0 ;
float pay = 0.00 ;
float payRateHour = 12.00 ;
float firstTax = 0.15 ;
float secondTax = 0.20 ;
float restTax = 0.25 ;

float payNormal, payFirst, paySecond, payRest ;

printf ("How many hours did the worker work? \nIntroduce here: " ) ;
scanf ("%d", &hour ); 

printf ("\n" ) ;

pay = payRateHour * hour ;

if ( pay > 11 && pay <= 480 ) 
{
    payNormal = pay ;
    printf("The worker will receive: %.2f", payNormal ) ; 

} else if ( pay > 480 && pay <= 780 )
{
    payFirst = pay + ( pay * firstTax ) ;
    printf ("The worker wil receive: %.2f", payFirst ) ;

}else if (pay > 780 && pay <= 930 )
{
    paySecond = pay + ( pay * secondTax ) ;
    printf ("The worker wil receive: %.2f", paySecond ) ;

} else if ( pay > 930 )
{
    payRest = pay + ( pay * restTax ) ;
    printf ("The worker wil receive: %.2f", payRest ) ;

} else
{
    printf ("The worker is unemployed :(" ) ;
}


    return 0;
}