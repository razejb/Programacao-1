#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include "defs.h"

//-Jogos----------------------------
int humanoJoga(int pf);
int humano_aoCalhasJoga(int pf, int escolha);
int humano_chicoEspertoJoga(int pf, int escolha);
int aoCalhas_chicoEspertoJoga(int escolha);
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

void igualdade_J1(int *maoEsquerdaDefende, int *maoDireitaDefende, int *vA);

//-Jogador 2------------------------
void verifica_eeJ2(int *maoEsquerdaDefende, int *maoEsquerdaAtaca);
void frase_eeJ2(int maoEsquerdaDefende, int maoEsquerdaAtaca, int valorAnterior);

void verifica_ddJ2(int *maoDireitaDefende, int *maoDireitaAtaca);
void frase_ddJ2(int maoDireitaDefende, int maoDireitaAtaca, int valorAnterior);

void verifica_deJ2(int *maoEsquerdaDefende, int *maoDireitaAtaca);
void frase_deJ2(int maoEsquerdaDefende, int maoDireitaAtaca, int valorAnterior);

void verifica_edJ2(int *maoDireitaDefende, int *maoEsquerdaAtaca);
void frase_edJ2(int maoDireitaDefende, int maoEsquerdaAtaca, int valorAnterior);

void igualdade_J2(int *maoEsquerdaAtaca, int *maoDireitaAtaca, int *vA);

//-Verifica vez---------------------
void verificaVez_J1(char *jogador1, char *jogador2, int maoEsquerdaDefende, int maoDireitaDefende, int maoEsquerdaAtaca, int maoDireitaAtaca);
void verificaVez_J2(char *jogador1, char *jogador2, int maoEsquerdaDefende, int maoDireitaDefende, int maoEsquerdaAtaca, int maoDireitaAtaca, char *estetica);
void aoCalhas_igualdade_J1(int *maoEsquerdaDefende, int *maoDireitaDefende, int *vA, char *jogador1, int maoEsquerdaAtaca, int maoDireitaAtaca, char *jogador2);
void aoCalhas_igualdade_J2(int *maoEsquerdaAtaca, int *maoDireitaAtaca, int *vA, char *jogador1, int maoEsquerdaDefende, int maoDireitaDefende, char *jogador2, char *estetica);