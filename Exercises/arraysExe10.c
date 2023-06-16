#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>

/*
Escreva um programa que preenche um vetor com 10 números reais, introduzidos pelo
utilizador. Depois deverá imprimir:

• a média dos elementos. Para tal implemente a função float media(float v[])
• o menor elemento. Para tal implemente a função float minimo(float v[])
• o maior elemento. Para tal implemente a função float maximo(float v[])
• o conteúdo do vetor.
Utilize a função imprimir_vetor(float v[], int n) implementada no exercício anterior
*/

void imprimir_vetor(float v[], int n) ;
float media(float v[]) ;
float maximo(float v[]) ;
float minimo(float v[]) ;


MAIN()
  {
    float v[10] ;
   for(int i = 0; i < 10; i++)
    {
      printf("%dº valor introduzido: ", i+1) ;
      scanf("%f", &v[i]) ;
    }
  
  imprimir_vetor( v, 10 ) ;

  puts("\n\n");
  printf("Media: %.2f", media( v )) ;

  puts("\n\n") ;
  printf("Maximo: %.2f", maximo( v ) ) ;

  puts("\n\n") ;
  printf("Minimo: %.2f", minimo( v ) ) ;

  }

void imprimir_vetor(float v[], int n)
  {
      n = 10 ;
      for(int i = 0; i < n; i++) 
        {
          printf("%dº: %.2f |",i + 1 ,v[i]) ;
        } 
  }

float media(float v[])
  {
    float sum = 0, med = 0;
    for(int i = 0; i < 10; i++)
      {
        sum += v[i] ; 
      }
      
      med = sum / 10 ;

      return med ;
  }

float maximo(float v[]) 
  {
    float maior = 0 ;
    for(int i = 0; i < 10; i++)
      {
        if(v[i] > maior) 
          {
            maior = v[i] ; 
          }
      }
      return maior ;
  }   

float minimo(float v[])
  {
     float menor = v[0] ;
    for(int i = 0; i < 10; i++)
      {
        if(v[i] < menor) 
          {
            menor = v[i] ; 
          }
      }
      return menor ;
  }