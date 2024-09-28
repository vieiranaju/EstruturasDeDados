#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "eleicoes.h"

struct chapa {
    char nomeCandidato [50];
    int numero;
    int dataNascimento [3];
    char nomeVice [50];
};

struct arvore {
    Chapa* c ;
    Arvore* esquerda ;
    Arvore* direita ;
};