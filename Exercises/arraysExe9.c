#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>

/*
Escreva um programa que cria, preenche e faz o somatório de um vetor de números reais 
mostrando, no final, quer o vetor introduzido, quer o somatório. 

Assuma que é solicitado ao utilizador quer o nº quer os valores a introduzir 
(para definir o tamanho do vetor, assuma que nº máximo de elementos a introduzir é 15). 

Utilize as seguintes funções para desenvolvero programa:

• float calcula_somatorio(float v[], int n)
• void imprimir_vetor(float v[], int n)
*/


float calcula_somatorio(float v[], int n) ;
void imprimir_vetor(float v[], int n) ;

MAIN()
  {
   
   float v[15] ;
   int i ;

   for(i = 0; i < 15; i++)
    {
      printf("%dº valor introduzido: ", i+1) ;
      scanf("%f", &v[i]) ;
    }

    putchar('\n') ;

    imprimir_vetor( v, 15 ) ;

    puts("\n\n") ;

    printf("%.2f", calcula_somatorio( v, 15 ) ) ;
  }

  

  void imprimir_vetor(float v[], int n) 
    {
      n = 15 ;
      for(int i = 0; i < n; i++) 
        {
          printf("%dº: %.2f |",i + 1 ,v[i]) ;
        } 
    }


  float calcula_somatorio(float v[], int n)
    {
      n = 15;
      float sum = 0 ;
      for(int i = 0; i < n; i++)
        {
          sum += v[i] ;
        }
        return sum ;
    }




   