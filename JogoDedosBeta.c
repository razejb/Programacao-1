#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "defs.h"
#include <math.h>
#include <ncurses.h>
#include <cstring>
#include <ctype.h>
#include <time.h>
#include <unistd.h>

void verificaVez_J1(char *jogador1, int maoEsquerdaDefende, int maoDireitaDefende, int maoEsquerdaAtaca, int maoDireitaAtaca);
void verificaVez_J2(char *jogador1, int maoEsquerdaDefende, int maoDireitaDefende, int maoEsquerdaAtaca, int maoDireitaAtaca);
int humanoJoga(int pf);
void aoCalhasJoga();
void chicoEspertoJoga();

//-Jogador 1------------------------
void verifica_eeJ1(int *maoEsquerdaAtaca, int *maoEsquerdaDefende);
void frase_eeJ1(int maoEsquerdaAtaca, int maoEsquerdaDefende, int valorAnterior);

void verifica_ddJ1(int *maoDireitaAtaca, int *maoDireitaDefende);
void frase_ddJ1(int maoDireitaAtaca, int maoDireitaDefende, int valorAnterior);

void verifica_deJ1(int *maoEsquerdaAtaca, int *maoDireitaDefende);
void frase_deJ1(int maoEsquerdaAtaca, int maoDireitaDefende, int valorAnterior);

void verifica_edJ1(int *maoDireitaAtaca, int *maoEsquerdaDefende);
void frase_edJ1(int maoDireitaAtaca, int maoEsquerdaDefende, int valorAnterior);

void igualdade_J1(int *maoEsquerdaDefende, int *maoDireitaDefende, int vA);

//-Jogador 2------------------------
void verifica_eeJ2(int *maoEsquerdaDefende, int *maoEsquerdaAtaca);
void frase_eeJ2(int maoEsquerdaDefende, int maoEsquerdaAtaca, int valorAnterior);

void verifica_ddJ2(int *maoDireitaDefende, int *maoDireitaAtaca);
void frase_ddJ2(int maoDireitaDefende, int maoDireitaAtaca, int valorAnterior);

void verifica_deJ2(int *maoEsquerdaDefende, int *maoDireitaAtaca);
void frase_deJ2(int maoEsquerdaDefende, int maoDireitaAtaca, int valorAnterior);

void verifica_edJ2(int *maoDireitaDefende, int *maoEsquerdaAtaca);
void frase_edJ2(int maoDireitaDefende, int maoEsquerdaAtaca, int valorAnterior);

void igualdade_J2(int *maoEsquerdaAtaca, int *maoDireitaAtaca, int vA);

MAIN()
{
    // Jogadores
    char *jogador1 = argv[1];
    char *jogador2 = argv[2];
    char j1[] = "humano";
    char j2[] = "chico-esperto";
    char j3[] = "ao-calhas";

    // Auxiliar
    int pontoFinal;

    //-Verificação dos jogadores---
    int escolhaHumano1, escolhaChicoEsperto1, escolhaAoCalhas1;
    int escolhaHumano2, escolhaChicoEsperto2, escolhaAoCalhas2;

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
            humanoJoga(pontoFinal);
        }

        else if ((escolhaChicoEsperto1 == 0) && (escolhaChicoEsperto2 == 0))
        {
            printf("\nJogo dos dedos - %s vs %s\n\n", jogador1, jogador2);
            chicoEspertoJoga();
        }

        else if ((escolhaAoCalhas1 == 0) && (escolhaAoCalhas2 == 0))
        {
            // ao-calhas vs ao-calhas
            printf("\nJogo dos dedos - %s vs %s\n\n", jogador1, jogador2);
            aoCalhasJoga();
        }

        else if (((escolhaHumano1 == 0) && (escolhaAoCalhas2 == 0)) || ((escolhaAoCalhas1 == 0) && (escolhaHumano2 == 0)))
            // humano vs ao-calhas ou ao-calhas vs humano
            printf("%s vs %s", jogador1, jogador2);

        else if (((escolhaHumano1 == 0) && (escolhaChicoEsperto2 == 0)) || ((escolhaChicoEsperto1 == 0) && (escolhaHumano2 == 0)))
            printf("Humano vs Chico-Esperto");
        else
            printf("Insira corretamente os jogadores !");

    } while (pontoFinal != 0);
}

int humanoJoga(int pf)
{
    // iteradores
    int i = 0, j = 0;

    // jogadores
    char jogador1[] = "Humano";

    // Define a vez
    int jogador[] = {0, 1};

    // jogada
    char *jogada;
    jogada = ((char *)malloc(100));

    // Verificação da jogada
    char jogada1[] = "ee";
    char jogada2[] = "ed";
    char jogada3[] = "dd";
    char jogada4[] = "de";
    char igual[] = "=";
    char pontoFinal[] = ".";
    int ee, ed, dd, de, igl;

    // Auxiliar
    int valorAnterior;

    // Mãos
    int maoEsquerdaAtaca = 1;
    int maoDireitaAtaca = 1;
    int maoEsquerdaDefende = 1;
    int maoDireitaDefende = 1;

    for (j; !((maoEsquerdaAtaca == 0) && (maoDireitaAtaca == 0) || (maoEsquerdaDefende == 0) && (maoDireitaDefende == 0)) != 0; j++)
    {
        for (i; jogador[i] < 2; i++)
        {

            /*-----Jogador 2-----------------------*/
            if (jogador[i] == 1)
            {
                printf("\t\t  E  D\n");
                printf("\t%s 1: %d, %d\n\t%s 2: %d, %d", jogador1, maoEsquerdaDefende, maoDireitaDefende, jogador1, maoEsquerdaAtaca, maoDireitaAtaca);
                printf("\n\nVez do %s 2: ", jogador1);
                scanf("%s", jogada);

                ee = strncmp(jogada1, jogada, 3);
                ed = strncmp(jogada2, jogada, 3);
                dd = strncmp(jogada3, jogada, 3);
                de = strncmp(jogada4, jogada, 3);
                igl = strncmp(igual, jogada, 2);
                pf = strncmp(pontoFinal, jogada, 2);

                if (pf == 0)
                    return 0;

                /*----Esquerda-Esquerda---*/
                if (ee == 0)
                {
                    if ((maoEsquerdaDefende != 0) && (maoEsquerdaAtaca != 0))
                        verifica_eeJ2(&maoEsquerdaDefende, &maoEsquerdaAtaca);
                    else
                    {
                        printf("jogada inválida !\n");
                        i--;
                    }
                }

                /*----Direita-Direita----*/
                else if (dd == 0)
                {
                    if ((maoDireitaDefende != 0) && (maoDireitaAtaca != 0))
                        verifica_ddJ2(&maoDireitaDefende, &maoDireitaAtaca);
                    else
                    {
                        printf("jogada inválida !\n");
                        i--;
                    }
                }
                /*----Direita-Esquerda----*/
                else if (de == 0)
                {
                    if ((maoEsquerdaDefende != 0) && (maoDireitaAtaca != 0))
                        verifica_deJ2(&maoEsquerdaDefende, &maoDireitaAtaca);
                    else
                    {
                        printf("jogada inválida !\n");
                        i--;
                    }
                }
                /*----Esquerda-Direita----*/
                else if (ed == 0)
                {
                    if ((maoDireitaDefende != 0) && (maoEsquerdaAtaca != 0))
                        verifica_edJ2(&maoDireitaDefende, &maoEsquerdaAtaca);
                    else
                    {
                        printf("jogada inválida !\n");
                        i--;
                    }
                }
                /*----Igualdade-----------*/
                else if (igl == 0)
                {
                    igualdade_J2(&maoEsquerdaAtaca, &maoDireitaAtaca, valorAnterior);
                    if (valorAnterior == 0)
                    {
                        printf("jogada inválida !\n");
                        i--;
                    }
                }

                /*----Jogada-Inválida-----*/
                else
                {
                    printf("jogada inválida !\n");
                    i--;
                }
                /*----Vitória----*/
                if ((maoEsquerdaDefende == 0) && (maoDireitaDefende == 0))
                {
                    puts("");
                    printf("\t\t  E  D\n");
                    printf("\t%s 1: %d, %d\n\t%s 2: %d, %d", jogador1, maoEsquerdaDefende, maoDireitaDefende, jogador1, maoEsquerdaAtaca, maoDireitaAtaca);
                    printf("\n\nVitória do %s 2!!!", jogador1);
                    break;
                }
            }

            /*-----Jogador 1-----------------------*/
            else if (jogador[i] == 0)
            {
                printf("\t\t  E  D\n");
                printf("\t%s 1: %d, %d\n\t%s 2: %d, %d", jogador1, maoEsquerdaDefende, maoDireitaDefende, jogador1, maoEsquerdaAtaca, maoDireitaAtaca);
                printf("\n\nVez do %s 1: ", jogador1);
                scanf("%s", jogada);

                ee = strncmp(jogada1, jogada, 3);
                ed = strncmp(jogada2, jogada, 3);
                dd = strncmp(jogada3, jogada, 3);
                de = strncmp(jogada4, jogada, 3);
                igl = strncmp(igual, jogada, 2);
                pf = strncmp(pontoFinal, jogada, 2);

                if (pf == 0)
                    return 0;

                /*----Esquerda-Esquerda----*/
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
                /*----Direita-Direita------*/
                else if (dd == 0)
                {
                    if ((maoDireitaAtaca != 0) && (maoDireitaDefende != 0))
                        verifica_ddJ1(&maoDireitaAtaca, &maoDireitaDefende);
                    else
                    {
                        printf("jogada inválida !\n");
                        break;
                    }
                }
                /*----Direita-Esquerda-----*/
                else if (de == 0)
                {
                    if ((maoEsquerdaAtaca != 0) && (maoDireitaDefende != 0))
                        verifica_deJ1(&maoEsquerdaAtaca, &maoDireitaDefende);
                    else
                    {
                        printf("jogada inválida !\n");
                        break;
                    }
                }
                /*----Esquerda-Direita-----*/
                else if (ed == 0)
                {
                    if ((maoDireitaAtaca != 0) && (maoEsquerdaDefende != 0))
                        verifica_edJ1(&maoDireitaAtaca, &maoEsquerdaDefende);
                    else
                    {
                        printf("jogada inválida !\n");
                        break;
                    }
                }

                /*----Igualdade------------*/
                else if (igl == 0)
                {
                    igualdade_J1(&maoEsquerdaDefende, &maoDireitaDefende, valorAnterior);
                    if (valorAnterior == 0)
                    {
                        printf("jogada inválida !\n");
                        break;
                    }
                }
                /*----Jogada-Inválida------*/
                else
                {
                    printf("jogada inválida !\n");
                    break;
                }
                /*----Vitória--------------*/
                if ((maoEsquerdaAtaca == 0) && (maoDireitaAtaca == 0))
                {
                    printf("\t\t  E  D\n");
                    printf("\t%s 1: %d, %d\n\t%s 2: %d, %d", jogador1, maoEsquerdaDefende, maoDireitaDefende, jogador1, maoEsquerdaAtaca, maoDireitaAtaca);
                    printf("\n\nVitória do %s 1!!!", jogador1);
                    break;
                }
            }
        }
        i = 0;
    }
    return 0;
}
void aoCalhasJoga()
{
    // iteradores
    int i = 0, j = 0;

    // jogadores
    char jogador1[] = "ao-calhas";

    // Define a vez
    int jogador[] = {0, 1};

    // jogada
    char *jogada;
    jogada = ((char *)malloc(100));

    // Auxiliares
    int valorAnterior, n;
    time_t t;
    srand((unsigned)time(&t));

    // Mãos
    int maoEsquerdaAtaca = 1;
    int maoDireitaAtaca = 1;
    int maoEsquerdaDefende = 1;
    int maoDireitaDefende = 1;

    for (j; !((maoEsquerdaAtaca == 0) && (maoDireitaAtaca == 0) || (maoEsquerdaDefende == 0) && (maoDireitaDefende == 0)) != 0; j++)
    {
        for (i; jogador[i] < 2; i++)
        {
            sleep(1);

            /*-----Jogador 2-----------------------*/
            if (jogador[i] == 1)
            {
                n = rand() % 5;
                /*----Esquerda-Esquerda---*/
                if (n == 0 && ((maoEsquerdaDefende != 0) && (maoEsquerdaAtaca != 0)))
                {
                    verificaVez_J2(jogador1, maoEsquerdaDefende, maoDireitaDefende, maoEsquerdaAtaca, maoDireitaAtaca);
                    printf("dd\n");
                    verifica_eeJ2(&maoEsquerdaDefende, &maoEsquerdaAtaca);
                }

                /*----Direita-Direita----*/
                else if (n == 1 && (maoDireitaDefende != 0) && (maoDireitaAtaca != 0))
                {
                    verificaVez_J2(jogador1, maoEsquerdaDefende, maoDireitaDefende, maoEsquerdaAtaca, maoDireitaAtaca);
                    printf("dd\n");
                    verifica_ddJ2(&maoDireitaDefende, &maoDireitaAtaca);
                }
                /*----Direita-Esquerda----*/
                else if (n == 2 && (maoEsquerdaDefende != 0) && (maoDireitaAtaca != 0))
                {
                    verificaVez_J2(jogador1, maoEsquerdaDefende, maoDireitaDefende, maoEsquerdaAtaca, maoDireitaAtaca);
                    printf("de\n");
                    verifica_deJ2(&maoEsquerdaDefende, &maoDireitaAtaca);
                }
                /*----Esquerda-Direita----*/
                else if (n == 3 && (maoDireitaDefende != 0) && (maoEsquerdaAtaca != 0))
                {
                    verificaVez_J2(jogador1, maoEsquerdaDefende, maoDireitaDefende, maoEsquerdaAtaca, maoDireitaAtaca);
                    printf("ed\n");
                    verifica_edJ2(&maoDireitaDefende, &maoEsquerdaAtaca);
                }
                /*----Igualdade-----------*/
                else if (n == 4)
                {
                    igualdade_J2(&maoEsquerdaAtaca, &maoDireitaAtaca, valorAnterior);
                    if (valorAnterior == 0)
                    {
                        verificaVez_J2(jogador1, maoEsquerdaDefende, maoDireitaDefende, maoEsquerdaAtaca, maoDireitaAtaca);
                        printf("=\n");
                    }
                    else
                    {
                        i--;
                    }
                }
                else
                {
                    i--;
                }

                /*----Vitória--------------*/
                if ((maoEsquerdaDefende == 0) && (maoDireitaDefende == 0))
                {
                    printf("\n\t%s 1: %d, %d\n\t%s 2: %d, %d", jogador1, maoEsquerdaDefende, maoDireitaDefende, jogador1, maoEsquerdaAtaca, maoDireitaAtaca);
                    printf("\n\nVitória do %s 2!!!", jogador1);
                    break;
                }
            }

            /*-----Jogador 1-----------------------*/
            else if (jogador[i] == 0)
            {
                n = rand() % 5;
                /*----Esquerda-Esquerda----*/
                if (n == 0 && (maoEsquerdaAtaca != 0) && (maoEsquerdaDefende != 0))
                {
                    verificaVez_J1(jogador1, maoEsquerdaDefende, maoDireitaDefende, maoEsquerdaAtaca, maoDireitaAtaca);
                    printf("ee\n");
                    verifica_eeJ1(&maoEsquerdaAtaca, &maoEsquerdaDefende);
                }

                /*----Direita-Direita------*/
                else if (n == 1 && (maoDireitaAtaca != 0) && (maoDireitaDefende != 0))
                {
                    verificaVez_J1(jogador1, maoEsquerdaDefende, maoDireitaDefende, maoEsquerdaAtaca, maoDireitaAtaca);
                    printf("dd\n");
                    verifica_ddJ1(&maoDireitaAtaca, &maoDireitaDefende);
                }

                /*----Direita-Esquerda-----*/
                else if (n == 2 && (maoEsquerdaAtaca != 0) && (maoDireitaDefende != 0))
                {
                    verificaVez_J1(jogador1, maoEsquerdaDefende, maoDireitaDefende, maoEsquerdaAtaca, maoDireitaAtaca);
                    printf("de\n");
                    verifica_deJ1(&maoEsquerdaAtaca, &maoDireitaDefende);
                }

                /*----Esquerda-Direita-----*/
                else if (n == 3 && (maoDireitaAtaca != 0) && (maoEsquerdaDefende != 0))
                {
                    verificaVez_J1(jogador1, maoEsquerdaDefende, maoDireitaDefende, maoEsquerdaAtaca, maoDireitaAtaca);
                    printf("ed\n");
                    verifica_edJ1(&maoDireitaAtaca, &maoEsquerdaDefende);
                }

                /*----Igualdade------------*/
                else if (n == 4)
                {
                    igualdade_J1(&maoEsquerdaDefende, &maoDireitaDefende, valorAnterior);
                    if (valorAnterior == 0)
                    {
                        verificaVez_J1(jogador1, maoEsquerdaDefende, maoDireitaDefende, maoEsquerdaAtaca, maoDireitaAtaca);
                        printf("=\n");
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    break;
                }

                /*----Vitória--------------*/
                if ((maoEsquerdaAtaca == 0) && (maoDireitaAtaca == 0) && (maoDireitaDefende != 0))
                {
                    printf("\t%s 1: %d, %d\n\t%s 2: %d, %d", jogador1, maoEsquerdaDefende, maoDireitaDefende, jogador1, maoEsquerdaAtaca, maoDireitaAtaca);
                    printf("\n\nVitória do %s 1!!!", jogador1);
                    break;
                }
            }
        }
        i = 0;
    }
}
void chicoEspertoJoga()
{
    // iteradores
    int i = 0, j = 0;

    // jogadores
    char jogador1[] = "chico-esperto";

    // Define a vez
    int jogador[] = {0, 1};

    // jogada
    char *jogada;
    jogada = ((char *)malloc(100));

    // Auxiliares
    int valorAnterior, n1, n2;

    // Mãos
    int maoEsquerdaAtaca = 1;
    int maoDireitaAtaca = 1;
    int maoEsquerdaDefende = 1;
    int maoDireitaDefende = 1;

    for (j; !((maoEsquerdaAtaca == 0) && (maoDireitaAtaca == 0) || (maoEsquerdaDefende == 0) && (maoDireitaDefende == 0)) != 0; j++)
    {
        for (i; jogador[i] < 2; i++)
        {

            /*-----Jogador 2-----------------------*/
            if (jogador[i] == 1)
            {
                sleep(1);
                puts("");
                printf("\t%s 1: %d, %d\n\t%s 2: %d, %d", jogador1, maoEsquerdaDefende, maoDireitaDefende, jogador1, maoEsquerdaAtaca, maoDireitaAtaca);
                printf("\n\nVez do %s 2: ", jogador1);

                /*----Esquerda-Esquerda  &   Esquerda-Direita----*/
                if ((maoEsquerdaDefende >= maoDireitaDefende) && (maoEsquerdaDefende != 0))
                {
                    if (maoEsquerdaAtaca < maoDireitaAtaca)
                    {
                        printf("ee\n");
                        verifica_eeJ2(&maoEsquerdaDefende, &maoEsquerdaAtaca);
                    }
                    else if (maoEsquerdaAtaca > maoDireitaAtaca)
                    {
                        printf("ed\n");
                        verifica_edJ2(&maoDireitaDefende, &maoEsquerdaAtaca);
                    }
                }

                /*----Direita-Direita   &   Direita-Esquerda----*/

                else if ((maoDireitaDefende > maoEsquerdaDefende) && (maoDireitaDefende != 0))
                {
                    if (maoDireitaAtaca < maoEsquerdaAtaca)
                    {
                        printf("dd\n");
                        verifica_ddJ2(&maoDireitaDefende, &maoDireitaAtaca);
                    }
                    else if (maoDireitaAtaca > maoEsquerdaAtaca)
                    {
                        printf("de\n");
                        verifica_deJ2(&maoEsquerdaDefende, &maoDireitaAtaca);
                    }
                }

                /*----Vitória--------------*/
                if ((maoEsquerdaDefende == 0) && (maoDireitaDefende == 0))
                {
                    puts("");
                    printf("\t%s 1: %d, %d\n\t%s 2: %d, %d", jogador1, maoEsquerdaDefende, maoDireitaDefende, jogador1, maoEsquerdaAtaca, maoDireitaAtaca);
                    printf("\n\nVitória do %s 2!!!", jogador1);
                    break;
                }
            }

            /*-----Jogador 1-----------------------*/
            else if (jogador[i] == 0)
            {
                sleep(1);
                puts("");
                printf("\t%s 1: %d, %d\n\t%s 2: %d, %d", jogador1, maoEsquerdaDefende, maoDireitaDefende, jogador1, maoEsquerdaAtaca, maoDireitaAtaca);
                printf("\n\nVez do %s 1: ", jogador1);

                /*----Esquerda-Esquerda   &   Esquerda-Direita----*/

                if ((maoEsquerdaAtaca >= maoDireitaAtaca) && (maoEsquerdaAtaca != 0))
                {
                    if (maoEsquerdaDefende < maoDireitaDefende)
                    {
                        printf("ee\n");
                        verifica_eeJ1(&maoEsquerdaAtaca, &maoEsquerdaDefende);
                    }
                    else if (maoDireitaDefende < maoEsquerdaDefende)
                    {
                        printf("ed\n");
                        verifica_edJ1(&maoDireitaAtaca, &maoEsquerdaDefende);
                    }
                }

                /*----Direita-Direita   &   Direita-Esquerda------*/

                else if (maoDireitaAtaca > maoEsquerdaAtaca && (maoDireitaAtaca != 0))
                {
                    if (maoDireitaDefende < maoEsquerdaDefende)
                    {
                        printf("dd\n");
                        verifica_ddJ1(&maoDireitaAtaca, &maoDireitaDefende);
                    }
                    else if (maoEsquerdaDefende < maoDireitaDefende)
                    {
                        printf("de\n");
                        verifica_deJ1(&maoEsquerdaAtaca, &maoDireitaDefende);
                    }
                }
            }

            /*----Vitória--------------*/
            if ((maoEsquerdaAtaca == 0) && (maoDireitaAtaca == 0) && (maoDireitaDefende != 0))
            {
                printf("\t%s 1: %d, %d\n\t%s 2: %d, %d", jogador1, maoEsquerdaDefende, maoDireitaDefende, jogador1, maoEsquerdaAtaca, maoDireitaAtaca);
                printf("\n\nVitória do %s 1!!!", jogador1);
                break;
            }
        }
    }
    i = 0;
}

//-Jogador 1-----
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

    frase_ddJ1(*maoDireitaAtaca, *maoDireitaDefende, vA);
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

void verifica_deJ1(int *maoEsquerdaAtaca, int *maoDireitaDefende)
{
    int vA = *maoEsquerdaAtaca;
    *maoEsquerdaAtaca = *maoEsquerdaAtaca + *maoDireitaDefende;

    if (*maoEsquerdaAtaca == 5)
        *maoEsquerdaAtaca = *maoEsquerdaAtaca % 5;

    else if (*maoEsquerdaAtaca > 5)
        *maoEsquerdaAtaca = *maoEsquerdaAtaca - 5;

    frase_deJ1(*maoEsquerdaAtaca, *maoDireitaDefende, vA);
}
void frase_deJ1(int maoEsquerdaAtaca, int maoDireitaDefende, int valorAnterior)
{
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

void verifica_edJ1(int *maoDireitaAtaca, int *maoEsquerdaDefende)
{
    int vA = *maoDireitaAtaca;
    *maoDireitaAtaca = *maoDireitaAtaca + *maoEsquerdaDefende;

    if (*maoDireitaAtaca == 5)
        *maoDireitaAtaca = *maoDireitaAtaca % 5;

    else if (*maoDireitaAtaca > 5)
        *maoDireitaAtaca = *maoDireitaAtaca - 5;

    frase_edJ1(*maoDireitaAtaca, *maoEsquerdaDefende, vA);
}
void frase_edJ1(int maoDireitaAtaca, int maoEsquerdaDefende, int valorAnterior)
{
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

void igualdade_J1(int *maoEsquerdaDefende, int *maoDireitaDefende, int vA)
{
    if ((*maoEsquerdaDefende == 0) && (*maoDireitaDefende == 2))
    {
        *maoEsquerdaDefende += 1;
        *maoDireitaDefende /= 2;
        printf("divide os 2 dedos pelas duas mãos\n\n");
    }
    else if ((*maoEsquerdaDefende == 2) && (*maoDireitaDefende == 0))
    {
        *maoEsquerdaDefende /= 2;
        *maoDireitaDefende += 1;
        printf("divide os 2 dedos pelas duas mãos\n\n");
    }
    else if ((*maoEsquerdaDefende == 0) && (*maoDireitaDefende == 4))
    {
        *maoEsquerdaDefende += 2;
        *maoDireitaDefende /= 2;
        printf("divide os 4 dedos pelas duas mãos\n\n");
    }
    else if ((*maoEsquerdaDefende == 4) && (*maoDireitaDefende == 0))
    {
        *maoEsquerdaDefende /= 2;
        *maoDireitaDefende += 2;
        printf("divide os 4 dedos pelas duas mãos\n\n");
    }
    else
    {
        vA = 0;
    }
}

//-Jogador 2-----
void verifica_eeJ2(int *maoEsquerdaDefende, int *maoEsquerdaAtaca)
{
    int vA = *maoEsquerdaDefende;
    *maoEsquerdaDefende = *maoEsquerdaDefende + *maoEsquerdaAtaca;

    if (*maoEsquerdaDefende == 5)
        *maoEsquerdaDefende = *maoEsquerdaDefende % 5;

    else if (*maoEsquerdaDefende > 5)
        *maoEsquerdaDefende = *maoEsquerdaDefende - 5;

    frase_eeJ2(*maoEsquerdaDefende, *maoEsquerdaAtaca, vA);
}
void frase_eeJ2(int maoEsquerdaDefende, int maoEsquerdaAtaca, int valorAnterior)
{
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

void verifica_ddJ2(int *maoDireitaDefende, int *maoDireitaAtaca)
{
    int vA = *maoDireitaAtaca;
    *maoDireitaDefende = *maoDireitaDefende + *maoDireitaAtaca;

    if (*maoDireitaDefende == 5)
        *maoDireitaDefende = *maoDireitaDefende % 5;

    else if (*maoDireitaDefende > 5)
        *maoDireitaDefende = *maoDireitaDefende - 5;
    frase_ddJ2(*maoDireitaDefende, *maoDireitaAtaca, vA);
}
void frase_ddJ2(int maoDireitaDefende, int maoDireitaAtaca, int valorAnterior)
{
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

void verifica_deJ2(int *maoEsquerdaDefende, int *maoDireitaAtaca)
{
    int vA = *maoEsquerdaDefende;
    *maoEsquerdaDefende = *maoEsquerdaDefende + *maoDireitaAtaca;

    if (*maoEsquerdaDefende == 5)
        *maoEsquerdaDefende = *maoEsquerdaDefende % 5;

    else if (*maoEsquerdaDefende > 5)
        *maoEsquerdaDefende = *maoEsquerdaDefende - 5;
    frase_deJ2(*maoEsquerdaDefende, *maoDireitaAtaca, vA);
}
void frase_deJ2(int maoEsquerdaDefende, int maoDireitaAtaca, int valorAnterior)
{
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

void verifica_edJ2(int *maoDireitaDefende, int *maoEsquerdaAtaca)
{
    int vA = *maoDireitaDefende;
    *maoDireitaDefende = *maoDireitaDefende + *maoEsquerdaAtaca;

    if (*maoDireitaDefende == 5)
        *maoDireitaDefende = *maoDireitaDefende % 5;

    else if (*maoDireitaDefende > 5)
        *maoDireitaDefende = *maoDireitaDefende - 5;
    frase_edJ2(*maoDireitaDefende, *maoEsquerdaAtaca, vA);
}
void frase_edJ2(int maoDireitaDefende, int maoEsquerdaAtaca, int valorAnterior)
{
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

void igualdade_J2(int *maoEsquerdaAtaca, int *maoDireitaAtaca, int vA)

{
    if ((*maoEsquerdaAtaca == 0) && (*maoDireitaAtaca == 2))
    {
        *maoEsquerdaAtaca += 1;
        *maoDireitaAtaca /= 2;
        printf("divide os 2 dedos pelas duas mãos\n\n");
    }
    else if ((*maoEsquerdaAtaca == 2) && (*maoDireitaAtaca == 0))
    {
        *maoEsquerdaAtaca /= 2;
        *maoDireitaAtaca += 1;
        printf("divide os 2 dedos pelas duas mãos\n\n");
    }
    else if ((*maoEsquerdaAtaca == 0) && (*maoDireitaAtaca == 4))
    {
        *maoEsquerdaAtaca += 2;
        *maoDireitaAtaca /= 2;
        printf("divide os 4 dedos pelas duas mãos\n\n");
    }
    else if ((*maoEsquerdaAtaca == 4) && (*maoDireitaAtaca == 0))
    {
        *maoEsquerdaAtaca /= 2;
        *maoDireitaAtaca += 2;
        printf("divide os 4 dedos pelas duas mãos\n\n");
    }
    else
    {
        vA = 0;
    }
}

void verificaVez_J1(char *jogador1, int maoEsquerdaDefende, int maoDireitaDefende, int maoEsquerdaAtaca, int maoDireitaAtaca)
{
    printf("\t%s 1: %d, %d\n\t%s 2: %d, %d", jogador1, maoEsquerdaDefende, maoDireitaDefende, jogador1, maoEsquerdaAtaca, maoDireitaAtaca);
    printf("\n\nVez do %s 1: ", jogador1);
}
void verificaVez_J2(char *jogador1, int maoEsquerdaDefende, int maoDireitaDefende, int maoEsquerdaAtaca, int maoDireitaAtaca)
{

    printf("\t%s 1: %d, %d\n\t%s 2: %d, %d", jogador1, maoEsquerdaDefende, maoDireitaDefende, jogador1, maoEsquerdaAtaca, maoDireitaAtaca);
    printf("\n\nVez do %s 2: ", jogador1);
}