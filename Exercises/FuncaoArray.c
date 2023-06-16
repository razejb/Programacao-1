#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void inic( int s[] )
  {
    int i ;
    for ( i = 0; i < 25; i++ )
      s[i] = 0 ;
  }    

int main()
  {
    int v[25], i ;

    inic (v) ;

    for ( i = 0; i < 25; i++ )
      v[i] = i ;

    for ( i = 25 - 1; i >= 0; i-- )
    printf ( "%d\n", v[i] ) ;

  }

