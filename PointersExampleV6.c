#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>
#include <cstring>

/*
Pointers Example
*/ 


void square(int *x);

int main()
  {
    int num = 7;

    square(&num);
    printf("The square of the given number is %d\n", num);

    return 0;
  }

  

void square(int *x)
{
    *x = (*x) * (*x);
}

 



