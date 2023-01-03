#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>
#include <cstring>
#include <ctype.h>

int humanoJoga(int pf);

// J1------------------------
void verifica_eeJ1(int *maoEsquerdaAtaca, int *maoEsquerdaDefende);
void frase_eeJ1(int maoEsquerdaAtaca, int maoEsquerdaDefende, int valorAnterior);

void verifica_ddJ1(int *maoDireitaAtaca, int *maoDireitaDefende) ;
void frase_ddJ1(int maoDireitaAtaca, int maoDireitaDefende, int valorAnterior);



MAIN()
{
    char *jogador1 = argv[1];
    char *jogador2 = argv[2];

    char j1[] = "humano";
    char j2[] = "chico-esperto";
    char j3[] = "ao-calhas";
    int pontoFinal, fimJogo;

    int escolhaHumano1, escolhaChicoEsperto1, escolhaAoCalhas1;
    int escolhaHumano2, escolhaChicoEsperto2, escolhaAoCalhas2;

    humanoJoga(pontoFinal) ;
    // humano
    escolhaHumano1 = strncmp(jogador1, j1, 7);
    escolhaHumano2 = strncmp(jogador2, j1, 7);

    // chico-esperto
    escolhaChicoEsperto1 = strncmp(jogador1, j2, 14);
    escolhaChicoEsperto2 = strncmp(jogador2, j2, 14);

    // ao-calhas
    escolhaAoCalhas1 = strncmp(jogador1, j3, 10);
    escolhaAoCalhas2 = strncmp(jogador2, j3, 10);
    do
    {
        if ((escolhaHumano1 == 0) && (escolhaHumano2 == 0))
        {

            printf("\nJogo dos dedos - humano vs humano\n\n");
            fimJogo = humanoJoga(pontoFinal);
        }

        else if ((escolhaChicoEsperto1 == 0) && (escolhaChicoEsperto2 == 0))
            printf("Chico-Esperto vs Chico-Esperto");

        else if ((escolhaAoCalhas1 == 0) && (escolhaAoCalhas2 == 0))
            printf("Ao-calhas vs Ao-calhas");

        else if (((escolhaHumano1 == 0) && (escolhaAoCalhas2 == 0)) || ((escolhaAoCalhas1 == 0) && (escolhaHumano2 == 0)))
            printf("Humano vs ao-calhas");

        else if (((escolhaHumano1 == 0) && (escolhaChicoEsperto2 == 0)) || ((escolhaChicoEsperto1 == 0) && (escolhaHumano2 == 0)))
            printf("Humano vs Chico-Esperto");
        else
            printf("Insira corretamente os jogadores !");

    } while (fimJogo != 0);
}

int humanoJoga(int pf)
{
    
    int i = 0, j = 0;
    char jogador1[] = "Humano 1";
    char jogador2[] = "Humano 2";
    int jogador[] = {0, 1};
    char *jogada;

    char jogada1[] = "ee";
    char jogada2[] = "ed";
    char jogada3[] = "dd";
    char jogada4[] = "de";
    char igual[] = "=";
    char pontoFinal[] = ".";

    int ee, ed, dd, de, igl;
    int valorAnterior;

    int maoEsquerdaAtaca = 1;
    int maoDireitaAtaca = 1;
    int maoEsquerdaDefende = 1;
    int maoDireitaDefende = 1;

    for (j; !((maoEsquerdaAtaca == 0) && (maoDireitaAtaca == 0) || (maoEsquerdaDefende == 0) && (maoDireitaDefende == 0)) != 0; j++)
    {

        for (i; jogador[i] < 2; i++)
        {

            /*---------------------------------------------------------------Jogador2-----------------------------------------------------------------*/
            if (jogador[i] == 1)
            {
                printf("\t\t  E  D\n");
                printf("\t%s: %d, %d\n\t%s: %d, %d", jogador1, maoEsquerdaDefende, maoDireitaDefende, jogador2, maoEsquerdaAtaca, maoDireitaAtaca);
                printf("\n\nVez do %s: ", jogador2);
                scanf("%s", jogada);

                ee = strncmp(jogada1, jogada, 3);
                ed = strncmp(jogada2, jogada, 3);
                dd = strncmp(jogada3, jogada, 3);
                de = strncmp(jogada4, jogada, 3);
                igl = strncmp(igual, jogada, 2);
                pf = strncmp(pontoFinal, jogada, 2);

                if (pf == 0)
                    return 0;

                /*-------------------------------Esquerda-Esquerda---------------------------------------*/
                if (ee == 0)
                {
                    valorAnterior = maoEsquerdaDefende;
                    maoEsquerdaDefende = maoEsquerdaDefende + maoEsquerdaAtaca;

                    if (maoEsquerdaDefende == 5)
                        maoEsquerdaDefende = maoEsquerdaDefende % 5;

                    else if (maoEsquerdaDefende > 5)
                        maoEsquerdaDefende = maoEsquerdaDefende - 5;

                    if ((maoEsquerdaAtaca == 1) && (valorAnterior == 1))
                        printf("dedo da esquerda ataca dedo da esquerda, ficam %d dedos\n", maoEsquerdaDefende);
                    else if (maoEsquerdaAtaca == 1)
                        printf("dedo da esquerda atacam %d dedo da esquerda, ficam %d dedos\n\n", valorAnterior, maoEsquerdaDefende);
                    else if (valorAnterior == 1)
                        printf("%d dedos da esquerda atacam dedo da esquerda, ficam %d dedos\n\n", maoEsquerdaAtaca, maoEsquerdaDefende);
                    else if (maoEsquerdaDefende == 1)
                        printf("%d dedos da esquerda atacam %d dedos da esquerda, fica %d dedo\n\n", maoEsquerdaAtaca, valorAnterior, maoEsquerdaDefende);
                    else
                        printf("%d dedos da esquerda atacam %d dedos da esquerda, ficam %d dedos\n", maoEsquerdaAtaca, valorAnterior, maoEsquerdaDefende);
                }

                /*-------------------------------Direita-Direita------------------------------------------*/
                else if (dd == 0)
                {
                    valorAnterior = maoDireitaDefende;
                    maoDireitaDefende = maoDireitaDefende + maoDireitaAtaca;

                    if (maoDireitaDefende == 5)
                        maoDireitaDefende = maoDireitaDefende % 5;

                    else if (maoDireitaDefende > 5)
                        maoDireitaDefende = maoDireitaDefende - 5;

                    if ((maoDireitaAtaca == 1) && (valorAnterior == 1))
                        printf("dedo da direita ataca dedo da direita, ficam %d dedos\n\n", maoDireitaDefende);
                    else if (maoDireitaAtaca == 1)
                        printf("dedo da direita ataca %d dedos da direita, ficam %d dedos\n\n", valorAnterior, maoDireitaDefende);
                    else if (valorAnterior == 1)
                        printf("%d dedos da direita atacam dedo da direita, ficam %d dedos\n\n", maoDireitaAtaca, maoDireitaDefende);
                    else if (maoDireitaDefende == 1)
                        printf("%d dedos da direita atacam %d dedos da direita, fica %d dedo\n\n", maoDireitaAtaca, valorAnterior, maoDireitaDefende);
                    else
                        printf("%d dedos da direita atacam %d dedos da direita, ficam %d dedos\n\n", maoDireitaAtaca, valorAnterior, maoDireitaDefende);
                }
                /*-------------------------------Direita-Esquerda------------------------------------------*/
                else if (de == 0)
                {
                    valorAnterior = maoEsquerdaDefende;
                    maoEsquerdaDefende = maoEsquerdaDefende + maoDireitaAtaca;

                    if (maoEsquerdaDefende == 5)
                        maoEsquerdaDefende = maoEsquerdaDefende % 5;

                    else if (maoEsquerdaDefende > 5)
                        maoEsquerdaDefende = maoEsquerdaDefende - 5;

                    if ((maoDireitaAtaca == 1) && (valorAnterior == 1))
                        printf("dedo da direita ataca dedo da esquerda, ficam %d dedos\n\n", maoEsquerdaDefende);
                    else if (maoDireitaAtaca == 1)
                        printf("dedo da direita ataca %d dedos da esquerda, ficam %d dedos\n\n", valorAnterior, maoEsquerdaDefende);
                    else if (valorAnterior == 1)
                        printf("%d dedos da direita atacam dedo da esquerda, ficam %d dedos\n\n", maoDireitaAtaca, maoEsquerdaDefende);
                    else if (maoEsquerdaDefende == 1)
                        printf("%d dedos da direita atacam %d dedos da esquerda, fica %d dedo\n\n", maoDireitaAtaca, valorAnterior, maoEsquerdaDefende);
                    else
                        printf("%d dedos da direita atacam %d dedos da esquerda, ficam %d dedos\n\n", maoDireitaAtaca, valorAnterior, maoEsquerdaDefende);
                }
                /*-------------------------------Esquerda-Direita------------------------------------------*/
                else if (ed == 0)
                {
                    valorAnterior = maoDireitaDefende;
                    maoDireitaDefende = maoDireitaDefende + maoEsquerdaAtaca;

                    if (maoDireitaDefende == 5)
                        maoDireitaDefende = maoDireitaDefende % 5;

                    else if (maoDireitaDefende > 5)
                        maoDireitaDefende = maoDireitaDefende - 5;

                    if ((maoEsquerdaAtaca == 1) && (valorAnterior == 1))
                        printf("dedo da esquerda ataca dedo da direita, ficam %d dedos\n\n", maoDireitaDefende);
                    else if (maoEsquerdaAtaca == 1)
                        printf("dedo da esquerda ataca %d dedos da direita, ficam %d dedos\n\n", valorAnterior, maoDireitaDefende);
                    else if (valorAnterior == 1)
                        printf("%d dedos da esquerda atacam dedo da direita, ficam %d dedos\n\n", maoEsquerdaAtaca, maoDireitaDefende);
                    else if (maoDireitaDefende == 1)
                        printf("%d dedos da esquerda atacam %d dedos da direita, fica %d dedo\n\n", maoEsquerdaAtaca, valorAnterior, maoDireitaDefende);
                    else
                        printf("%d dedos da esquerda atacam %d dedos da direita, ficam %d dedos\n\n", maoEsquerdaAtaca, valorAnterior, maoDireitaDefende);
                }
                /*--------------------------------------Igualdade--------------------------------------------*/
                else if (igl == 0)
                {
                    if ((maoEsquerdaAtaca == 0) && (maoDireitaAtaca == 2))
                    {
                        maoEsquerdaAtaca += 1;
                        maoDireitaAtaca /= 2;
                        printf("divide os 2 dedos pelas duas mãos\n\n");
                    }
                    else if ((maoEsquerdaAtaca == 2) && (maoDireitaAtaca == 0))
                    {
                        maoEsquerdaAtaca /= 2;
                        maoDireitaAtaca += 1;
                        printf("divide os 2 dedos pelas duas mãos\n\n");
                    }
                    else if ((maoEsquerdaAtaca == 0) && (maoDireitaAtaca == 4))
                    {
                        maoEsquerdaAtaca += 2;
                        maoDireitaAtaca /= 2;
                        printf("divide os 4 dedos pelas duas mãos\n\n");
                    }
                    else if ((maoEsquerdaAtaca == 4) && (maoDireitaAtaca == 0))
                    {
                        maoEsquerdaAtaca /= 2;
                        maoDireitaAtaca += 2;
                        printf("divide os 4 dedos pelas duas mãos\n\n");
                    }
                    else
                    {
                        printf("jogada inválida !\n");
                        i--;
                    }
                }

                /*-------------------------------Jogada-Inválida------------------------------------------*/
                else
                {
                    printf("jogada inválida !\n");
                    i--;
                }
                /*----------------------------------Vitória-----------------------------------------------*/
                if ((maoEsquerdaDefende == 0) && (maoDireitaDefende == 0))
                {
                    puts("");
                    printf("\t\t  E  D\n");
                    printf("\t%s: %d, %d\n\t%s: %d, %d", jogador1, maoEsquerdaDefende, maoDireitaDefende, jogador2, maoEsquerdaAtaca, maoDireitaAtaca);
                    printf("\n\nVitória do %s!!!", jogador2);
                    break;
                }
            }

            /*---------------------------------------------------------------Jogador1-----------------------------------------------------------------*/
            else if (jogador[i] == 0)
            {
                printf("\t\t  E  D\n");
                printf("\t%s: %d, %d\n\t%s: %d, %d", jogador1, maoEsquerdaDefende, maoDireitaDefende, jogador2, maoEsquerdaAtaca, maoDireitaAtaca);
                printf("\n\nVez do %s: ", jogador1);
                scanf("%s", jogada);

                ee = strncmp(jogada1, jogada, 3);
                ed = strncmp(jogada2, jogada, 3);
                dd = strncmp(jogada3, jogada, 3);
                de = strncmp(jogada4, jogada, 3);
                igl = strncmp(igual, jogada, 2);
                pf = strncmp(pontoFinal, jogada, 2);

                if (pf == 0)
                    return 0;

                /*-------------------------------Esquerda-Esquerda---------------------------------------*/
                if (ee == 0)
                {
                    if ((maoEsquerdaAtaca != 0) && (maoEsquerdaDefende != 0))
                        {
                            verifica_eeJ1(&maoEsquerdaAtaca, &maoEsquerdaDefende);
                            
                        }
                    else
                    {
                        printf("jogada inválida !\n");
                        break;
                    }
                }
                /*-------------------------------Direita-Direita------------------------------------------*/
                else if (dd == 0)
                {
                    if((maoDireitaAtaca != 0) && (maoDireitaDefende != 0))
                        verifica_ddJ1(&maoDireitaAtaca, &maoDireitaDefende);
                    else
                    {
                      printf("jogada inválida !\n");
                      break;  
                    }
                }
                /*-------------------------------Direita-Esquerda------------------------------------------*/
                else if (de == 0)
                {
                    valorAnterior = maoEsquerdaAtaca;
                    maoEsquerdaAtaca = maoEsquerdaAtaca + maoDireitaDefende;

                    if (maoEsquerdaAtaca == 5)
                        maoEsquerdaAtaca = maoEsquerdaAtaca % 5;

                    else if (maoEsquerdaAtaca > 5)
                        maoEsquerdaAtaca = maoEsquerdaAtaca - 5;

                    if ((maoDireitaDefende == 1) && (valorAnterior == 1))
                        printf("dedo da direita ataca dedo da esquerda, ficam %d dedos\n\n", maoEsquerdaAtaca);
                    else if (maoDireitaDefende == 1)
                        printf("dedo da direita ataca %d dedos da esquerda, ficam %d dedos\n\n", valorAnterior, maoEsquerdaAtaca);
                    else if (valorAnterior == 1)
                        printf("%d dedos da direita atacam dedo da esquerda, ficam %d dedos\n\n", maoDireitaDefende, maoEsquerdaAtaca);
                    else if (maoEsquerdaAtaca == 1)
                        printf("%d dedos da direita atacam %d dedos da esquerda, fica %d dedo\n\n", maoDireitaDefende, valorAnterior, maoEsquerdaAtaca);
                    else
                        printf("%d dedos da direita atacam %d dedos da esquerda, ficam %d dedos\n\n", maoDireitaDefende, valorAnterior, maoEsquerdaAtaca);
                }
                /*-------------------------------Esquerda-Direita------------------------------------------*/
                else if (ed == 0)
                {
                    valorAnterior = maoDireitaAtaca;
                    maoDireitaAtaca = maoDireitaAtaca + maoEsquerdaDefende;

                    if (maoDireitaAtaca == 5)
                        maoDireitaAtaca = maoDireitaAtaca % 5;

                    else if (maoDireitaAtaca > 5)
                        maoDireitaAtaca = maoDireitaAtaca - 5;

                    if ((maoEsquerdaDefende == 1) && (valorAnterior == 1))
                        printf("dedo da esquerda ataca dedo da direita, ficam %d dedos\n\n", maoDireitaAtaca);
                    else if (maoEsquerdaDefende == 1)
                        printf("dedo da esquerda ataca %d dedos da direita, ficam %d dedos\n\n", valorAnterior, maoDireitaAtaca);
                    else if (valorAnterior == 1)
                        printf("%d dedos da esquerda atacam dedo da direta, ficam %d dedos\n\n", maoEsquerdaDefende, maoDireitaAtaca);
                    else if (maoDireitaAtaca == 1)
                        printf("%d dedos da esquerda atacam %d dedos da direita, fica %d dedo\n\n", maoEsquerdaDefende, valorAnterior, maoDireitaAtaca);
                    else
                        printf("%d dedos da esquerda atacam %d dedos da direita, ficam %d dedos\n\n", maoEsquerdaDefende, valorAnterior, maoDireitaAtaca);
                }

                /*--------------------------------------Igualdade--------------------------------------------*/
                else if (igl == 0)
                {
                    if ((maoEsquerdaDefende == 0) && (maoDireitaDefende == 2))
                    {
                        maoEsquerdaDefende += 1;
                        maoDireitaDefende /= 2;
                        printf("divide os 2 dedos pelas duas mãos\n\n");
                    }
                    else if ((maoEsquerdaDefende == 2) && (maoDireitaDefende == 0))
                    {
                        maoEsquerdaDefende /= 2;
                        maoDireitaDefende += 1;
                        printf("divide os 2 dedos pelas duas mãos\n\n");
                    }
                    else if ((maoEsquerdaDefende == 0) && (maoDireitaDefende == 4))
                    {
                        maoEsquerdaDefende += 2;
                        maoDireitaDefende /= 2;
                        printf("divide os 4 dedos pelas duas mãos\n\n");
                    }
                    else if ((maoEsquerdaDefende == 4) && (maoDireitaDefende == 0))
                    {
                        maoEsquerdaDefende /= 2;
                        maoDireitaDefende += 2;
                        printf("divide os 4 dedos pelas duas mãos\n\n");
                    }
                    else
                    {
                        printf("jogada inválida !\n");
                        break;
                    }
                }

                /*-------------------------------Jogada-Inválida------------------------------------------*/
                else
                {
                    printf("jogada inválida !\n");
                    break;
                }
                /*-----------------------------------Vitória-----------------------------------------------*/
                if ((maoEsquerdaAtaca == 0) && (maoDireitaAtaca == 0))
                {
                    printf("\t\t  E  D\n");
                    printf("\t%s: %d, %d\n\t%s: %d, %d", jogador1, maoEsquerdaDefende, maoDireitaDefende, jogador2, maoEsquerdaAtaca, maoDireitaAtaca);
                    printf("\n\nVitória do %s!!!", jogador1);
                    break;
                }
            }
        }
        i = 0;
    }
    return 0;
}

void verifica_eeJ1(int *maoEsquerdaAtaca, int *maoEsquerdaDefende)
{
    int vA = *maoEsquerdaAtaca;

    *maoEsquerdaAtaca = *maoEsquerdaAtaca + *maoEsquerdaDefende;

    if (*maoEsquerdaAtaca == 5)
        *maoEsquerdaAtaca = *maoEsquerdaAtaca % 5;

    else if (*maoEsquerdaAtaca > 5)
        *maoEsquerdaAtaca = *maoEsquerdaAtaca - 5;

    frase_eeJ1(*maoEsquerdaAtaca, *maoEsquerdaDefende, vA);
    
}
void frase_eeJ1(int maoEsquerdaAtaca, int maoEsquerdaDefende, int valorAnterior)
{
    if ((maoEsquerdaDefende == 1) && (valorAnterior == 1))
        printf("dedo da esquerda ataca dedo da esquerda, ficam %d dedos\n\n", maoEsquerdaAtaca);
    else if (maoEsquerdaDefende == 1)
        printf("dedo da esquerda ataca %d dedos da esquerda, ficam %d dedos\n\n", valorAnterior, maoEsquerdaAtaca);
    else if (valorAnterior == 1)
        printf("%d dedos da esquerda atacam dedo da esquerda, ficam %d dedos\n\n", maoEsquerdaDefende, maoEsquerdaAtaca);
    else if (maoEsquerdaAtaca == 1)
        printf("%d dedos da esquerda atacam %d dedos da esquerda, fica %d dedo\n\n", maoEsquerdaDefende, valorAnterior, maoEsquerdaAtaca);
    else
        printf("%d dedos da esquerda atacam %d dedos da esquerda, ficam %d dedos\n\n", maoEsquerdaDefende, valorAnterior, maoEsquerdaAtaca);
}

void verifica_ddJ1(int *maoDireitaAtaca, int *maoDireitaDefende)
{
    int vA = *maoDireitaAtaca;
    *maoDireitaAtaca = *maoDireitaAtaca + *maoDireitaDefende;

    if (*maoDireitaAtaca == 5)
        *maoDireitaAtaca = *maoDireitaAtaca % 5;

    else if (*maoDireitaAtaca > 5)
        *maoDireitaAtaca = *maoDireitaAtaca - 5;

    frase_ddJ1(*maoDireitaAtaca, *maoDireitaDefende, vA) ;
}
void frase_ddJ1(int maoDireitaAtaca, int maoDireitaDefende, int valorAnterior)
{
    if ((maoDireitaDefende == 1) && (valorAnterior == 1))
        printf("dedo da direita ataca dedo da direita, ficam %d dedos\n\n", maoDireitaAtaca);
    else if (maoDireitaDefende == 1)
        printf("dedo da direita ataca %d dedos da direita, ficam %d dedos\n\n", valorAnterior, maoDireitaAtaca);
    else if (valorAnterior == 1)
        printf("%d dedos da direita atacam dedo da direita, ficam %d dedos\n\n", maoDireitaDefende, maoDireitaAtaca);
    else if (maoDireitaAtaca == 1)
        printf("%d dedos da direita atacam %d dedos da direita, fica %d dedo\n\n", maoDireitaDefende, valorAnterior, maoDireitaAtaca);
    else
        printf("%d dedos da direita atacam %d dedos da direita, ficam %d dedos\n\n", maoDireitaDefende, valorAnterior, maoDireitaAtaca);
}
