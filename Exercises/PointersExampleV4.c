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

              //char *const string -> O endereço do valor do apontador não pode mudar

                //const char *string -> Não altera o valor do que está a ser apontado
int stringLength(const char *string) ;


int main(void)
  {
    printf("%d \n", stringLength("stringLength test")) ;
    printf("%d \n", stringLength("")) ;
    printf("%d \n", stringLength("jason")) ;

    return 0 ;
    
  }

int stringLength(const char *string) 
  {
    const char *lastAddress = string ;

  //  == //*lastAddress != '\0', não é necessário colocar pois, quando é zero, é falso, 
                                  //Tudo o que for diferente é verdadeiro
    while (*lastAddress)
      ++lastAddress ;

    return lastAddress - string ;
    
  }  

