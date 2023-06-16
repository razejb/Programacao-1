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


int main(void)
  {
   int size ;
   char *text = NULL;

   printf("Enter limit of the text: \n");
   scanf("%d", &size);

   text = (char*) malloc(size * sizeof(char));

   if (text != NULL)
   {
       printf("Enter some text: \n");
       scanf(" ");
       scanf("%s", text) ;

       printf("Inputted text is: %s\n", text);
   }

   free(text) ;
   text = NULL;
   return 0;
  }





