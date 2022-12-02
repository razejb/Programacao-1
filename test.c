#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>

/*
Assuma que o utilizador introduz uma sequência de números terminando com um número
negativo (no máximo, 20 valores). 

Crie um programa para ler esses números para um vetor e que peça um número para pesquisar o vetor. 

O programa deve indicar o tamanho da maior sequência que esse número ocorre no vetor. 
Por exemplo, para a sequência 1,2,3,4,4,1,3,4,-1 e num=4, a função devolve 3. Utilize a função

int contaRepetidos(int arr[], int sz, int num)
*/

int contaRepetidos(int vec[], int sz, int num) ;

MAIN()
  {
    int numeroInserido = 1, tamanho;
    int i = 0 ;
    int arr[100] ;

    for(i = 0; numeroInserido > -1; i++ )
      {
        printf("%dº valor inserido no array: ", i+1) ;
        scanf("%d", &numeroInserido ) ;

        arr[i] = numeroInserido ;
        tamanho = i ;
      } 
      
      int vec[tamanho] ;

      putchar('\n') ;

      for(i = 0; i < tamanho; i++) 
        {
          vec[i] = arr[i] ; 
        }
        printf("Repetidos: %d", contaRepetidos(vec, tamanho, 1)) ;

      
    
  }

int contaRepetidos(int vec[], int sz, int num)
  {
    int i, repetidos = 0;
    for(i = 0; i < sz; i++)
      {
        if( vec[i] == num )
          {
            repetidos++ ;
          }
      }
      
    return repetidos ;
  }



   