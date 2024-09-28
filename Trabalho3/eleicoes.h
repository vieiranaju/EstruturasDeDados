#ifndef ELEICOES_H_INCLUDED
#define ELEICOES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct chapa Chapa;
typedef struct arvore Arvore;

Chapa* CriaChapa ( char* nome, int numero, int votos );

Arvore* CriaArvore();

Arvore* InsereArvoreChapa (Arvore* a , Chapa* c );

Arvore* RetiraArvoreChapa (Arvore* a , int numero);

int VerificaArvoreChapa (Arvore* a , int numero);

int ModificarArvoreChapa (Arvore* a , int numero);

int Votar(Arvore* a , int numero);

void ImprimeArvoreChapas (Arvore* a );

Arvore* EsvaziarArvore( Arvore* a );

#endif // ELEICOES_H_INCLUDED
