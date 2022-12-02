#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>

/*Na cadeira de Arquitetura a avaliação é contínua: todas as semanas há um trabalho que
recebe classificação entre -1 e 20 (-1 significa que o trabalho não foi entregue). 

A nota final é a média arredondada às unidades das notas dos trabalhos descontando a melhor e
pior nota. Escreva um programa que lê a sequência de notas do aluno (guardando-as num
vetor) e mostra a nota final. 

O semestre tem 15 semanas (por isso, esse deve ser o tamanho do vetor). Por exemplo se as notas 
forem [-1, 10, 11, 12, 13, -1, 15, 8, 9, 15, 10, 12, 19, -1, 20], as 2 notas que não contam para a média são -1 e 20.*/

int verifica(int vec[], int sz) ;

MAIN()
  {
    int i, vec[15] ;
    for(i = 0; i < 15; i++)
      {
        printf("Nota da %d ª semana: ", i+1) ;
        scanf("%d", &vec[i]) ;
        if(vec[i] > 20 || vec[i] < -1)
          {
            i-- ;
            printf("Tente novamente ") ;
          }
      }

    printf("%d", verifica(vec, 15)) ;
  }


int verifica(int vec[], int sz)
  {
    int sum = 0, divisao = 0 ;
      for(int i = 0; i < sz; i++)
        {
          if( !((vec[i] == -1) || (vec[i] == 20)) )
            {
              divisao++ ;
              sum += vec[i] ;
            }          
        }
        sum = sum / divisao ;
        

      return sum;
  }