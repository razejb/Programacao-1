#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>

int matriz_identidade( int matriz[][3], int n ) ;

MAIN()
  {

   int matriz[][3] = {1, 0, 0,
                      0, 1, 0,
                      0, 0, 1}; 

      int resultado = matriz_identidade( matriz, 3) ;
      printf("%d", resultado) ;
  }


int matriz_identidade( int matriz[][3], int n )  
  {
    int i, j ;
    for(i = 0; i < n; i++)
      {
        for(j = 0; j < n; j++)
          {
            if(!((i==j) && (matriz[i][j]==1)))
              {
                if(!((i!=j) && (matriz[i][j]==0)))
                  {
                    return 0 ;
                  }
              }
          }
      }
      return 1;
  }

