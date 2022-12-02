#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>

int conta_elementos_iguais( int v1[], int v2[], int sz1, int sz2 ) ;

MAIN()
  {

    int a[]={1,2,2};
    int b[]={1,2,3,4,5};
    int c[]={2,4};
    int d[]={7,8};
  
    int resultado = conta_elementos_iguais( b, c, 5, 2 ) ;
    

    
    
      printf("%d\n", resultado) ;

  }

int conta_elementos_iguais( int v1[], int v2[], int sz1, int sz2 ) 
  {
      int i, j, count = 0;
      for(i = 0; i < sz1; i++)
        {
          for(j = 0; j < sz2; j++)
            {
              if(v1[i] == v2[j]) 
                {
                  printf("%d %d\n", v1[i], v2[j]) ;
                  count++ ;
                }

            }
        }
        return count;
      
  }




