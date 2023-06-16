#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>


int gcd(int u, int v)
  {
    int temp;

    while( v != 0 )
      {
        temp = u % v;
        u = v ;
        v = temp ;
      }

      return u ;
  }

float absoluteValue(float x) 
  {
    if(x < 0)
      x = -x;

      return x;
  }

float squareRoot(float x)
  {
    const float epsilon = .00001;
    float       guess   = 1.0 ;
    float       returnValue = 0.0;
    
    if( x < 0 )
      {
        printf("Negative argument to squareRoot.\n") ;
        returnValue = -1.0 ;
      }

    if(returnValue != -1.0)
      {
         while ( absoluteValue(guess * guess - x) >= epsilon )
          guess = (x / guess + guess)  / 2.0;

         returnValue = guess; 
      }

   

    return returnValue ;


  }

int main()
  {
    int gcdResult = 0 ;

    float f1 = -15.5, f2 = 20.0, f3 = -5.0;
    int i1 = -716;
    float result = 0.0;
    
    gcdResult = gcd(150, 35) ;
    printf("The gcd of 150  and 35  is %d\n", gcdResult) ;

    gcdResult = gcd(1240, 460) ;
    printf("The gcd of 1240 and 460 is %d\n", gcdResult) ;
    
    gcdResult = gcd(83, 240) ;
    printf("The gcd of 83   and 240 is %d\n\n", gcd(83, 240)) ;

/*testing absolute Value Function*/
  result = absoluteValue(f1);
    printf("result = \t%.2f\n", result) ;
    printf("    f1 =     \t%.2f\n", f1) ;


  result = absoluteValue(f2) + absoluteValue(f3);
    printf("result = \t%.2f\n", result) ;


  result = absoluteValue( (float) i1 );
    printf("result = \t%.2f\n", result) ;


  result = absoluteValue(i1) ;
    printf("result = \t%.2f\n", result) ;


    printf("\t\t%.2f\n", absoluteValue(-6.0) / 4);


    /*testing square root*/
    printf("%.2f\n", squareRoot  (-3.0)) ;
    printf("%.2f\n", squareRoot  (16.0)) ;
    printf("%.2f\n", squareRoot  (25.0)) ;
    printf("%.2f\n", squareRoot  (09.0)) ;
    printf("%.2f\n", squareRoot  (225.0));


  return 0 ;

  }
