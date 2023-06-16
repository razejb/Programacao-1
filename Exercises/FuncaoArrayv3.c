#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 10   //Sem Ponto e vírgula

void inic( int s[] )
  {
    int i ;
    for ( i = 0; i < NUM; i++ )
      s[i] = 0 ;
  }

int main()
{
  int v[NUM], i ;

  inic(v) ;

  for ( i = 0; i < NUM; i++ )
    v[i] = i ;

  for (  i = NUM - 1; i >= 0; i-- )
    printf ( "%d\n", v[i] ) ;
}