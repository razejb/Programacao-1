#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>

/*Implemente um programa para ler valores (não ordenados) correspondentes ao tempo (em
segundos) que vários atletas demoraram para correr 100m e mostrar o top3 dos tempos mais
baixos. Para isso deve, no programa principal, ler quantos atletas existem e o tempo de
cada um, separadamente. 

O vetor dos tempos deve ser passado como argumento às funções
float primeiro( float v[], int sz) , float segundo( float v[], int sz ) e
float terceiro( float v[], int sz ) que calculam os 3 melhores tempos.*/

//duvida


float primeiro( float v[], int sz) ;
float segundo( float v[], int sz ) ;
float terceiro( float v[], int sz );
MAIN()
  {
    int tempos ;
    

    printf("Quantos tempos pretende inserir? ") ; scanf("%d", &tempos) ;

    float v[tempos] ;

    for(int i = 0; i < tempos; i++ )
        {
            printf("Tempo do atleta %d: ", i + 1) ;
            scanf("%f", &v[i] ) ;
            
        }

    printf("%.2f\n", primeiro( v, 4 )) ;
    printf("%.2f\n", segundo( v, 4 )) ;
    printf("%.2f\n", terceiro( v, 4 )) ;

  }

  float primeiro( float v[], int sz)
    {
        int i, melhorTempo = v[0] ;
        for(i = 1; i < sz; i++)
            {
                if(v[i] < melhorTempo)
                    {
                        melhorTempo = v[i] ;
                    }
            }
        return melhorTempo;
    }


  float segundo( float v[], int sz ) 
    {
        int i, melhorTempo ;
        int segundoMelhorTempo = v[0] ;

        melhorTempo = primeiro( v, 4 ) ;

        for(i = 1; i < sz; i++)
            {
                if((v[i] > melhorTempo) && ((v[i] < segundoMelhorTempo) || (melhorTempo == segundoMelhorTempo)))
                    {
                        segundoMelhorTempo = v[i] ;
                    }
            }
      return segundoMelhorTempo;
    }
  
  
  
  float terceiro( float v[], int sz )
    {
        int i, segundoMelhorTempo= segundo( v, 4 ) ;
        int terceiroMelhorTempo = segundoMelhorTempo ;



        for(i = 1; i < sz; i++)
            {
                if((v[i] > segundoMelhorTempo) && ((v[i] < terceiroMelhorTempo) || (terceiroMelhorTempo == segundoMelhorTempo)))
                    {
                        terceiroMelhorTempo = v[i] ;
                    }
            }
        return terceiroMelhorTempo;

    }
