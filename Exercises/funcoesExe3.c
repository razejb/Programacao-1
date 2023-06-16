#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>


int velocidade(int v, int vi, int a, int t)
  {
    v = vi + a * t ;

    return v ;

  }

MAIN()
  {
    int velocidadeAtingida = 0, velocidadeInicial = 0, acelaracao = 0, tempo = 0;

    velocidadeInicial = atoi(argv[1]) ;
    acelaracao = atoi(argv[2]) ;
    tempo = atoi(argv[3]) ;

    printf("Velocidade atingida: %d", velocidade(velocidadeAtingida, velocidadeInicial, acelaracao, tempo)) ;
  }