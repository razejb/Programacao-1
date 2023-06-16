#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>


float posicao(float p, int pi, int vi, int a, int t)
  {
    p = pi + vi * t + (1/(float)2) * a * pow(t, 2) ;

    return p ;
  }

MAIN()
  {
    float posicaoAtingida = 0.00;
    int posicaoInicial = 0, velocidadeInicial = 0, acelaracao = 0, tempo = 0 ;

    posicaoInicial = atoi(argv[1]) ;
    velocidadeInicial = atoi(argv[2]) ;
    acelaracao = atoi(argv[3]) ;
    tempo = atoi(argv[4]) ;

    printf("Posicao inicial: %d\nPosicao atingida: %.2f",posicaoInicial, posicao(posicaoAtingida,posicaoInicial , velocidadeInicial, acelaracao, tempo)) ;
  }