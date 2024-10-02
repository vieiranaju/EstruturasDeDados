#ifndef ELEICOES_H_INCLUDED
#define ELEICOES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct chapa Chapa;
typedef struct arvore Arvore;

Arvore* CriaArvore();

Chapa* CriaChapa ( char* nomeCandidato, int numero, int* dataNascimento, char* nomeVice );

Arvore* InsereArvoreChapa (Arvore* a , Chapa* c );

void ImprimeArvoreChapas(Arvore* arvoreChapas);

void Votar(Arvore* a , int numero);

int VerificaSegundoTurno(Arvore* a, int totalPopulacao);

Arvore* AtualizaChapasSegundoTurno(Arvore* a);

void ImprimeBoletim (Arvore* a );

Arvore* EsvaziarArvore( Arvore* a );

#endif // ELEICOES_H_INCLUDED
