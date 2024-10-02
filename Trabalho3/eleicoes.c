#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "eleicoes.h"

struct chapa {
    char nomeCandidato [50];
    int numero;
    int dataNascimento [3];
    char nomeVice [50];
    int votos;
};

struct arvore {
    Chapa* c ;
    Arvore* esquerda ;
    Arvore* direita ;
};

Arvore* CriaArvore(){

    return NULL;

}

Chapa* CriaChapa(char* nomeCandidato, int numero, int* dataNascimento, char* nomeVice) {
    Chapa* novaChapa = (Chapa*) malloc(sizeof(Chapa));

    if (novaChapa == NULL) {
        printf("Erro ao alocar memoria!\n");
        return NULL;
    }

    strcpy(novaChapa->nomeCandidato, nomeCandidato);
    novaChapa->numero = numero;
    novaChapa->dataNascimento[0] = dataNascimento[0];
    novaChapa->dataNascimento[1] = dataNascimento[1];
    novaChapa->dataNascimento[2] = dataNascimento[2];
    strcpy(novaChapa->nomeVice, nomeVice);
    novaChapa->votos = 0;

    return novaChapa;
}

Arvore* InsereArvoreChapa(Arvore* arvChapas, Chapa* novaChapa) {
    if (arvChapas == NULL) {
        Arvore* novaArv = (Arvore*) malloc(sizeof(Arvore));
        if (novaArv == NULL) exit(1);

        novaArv->c = novaChapa;
        novaArv->esquerda = NULL;
        novaArv->direita = NULL;

        return novaArv;
    } else if (arvChapas->c->numero > novaChapa->numero) {
        arvChapas->esquerda = InsereArvoreChapa(arvChapas->esquerda, novaChapa);
    } else {
        arvChapas->direita = InsereArvoreChapa(arvChapas->direita, novaChapa);
    }

    return arvChapas;
}

void ImprimeArvoreChapas(Arvore* arvoreChapas) {
    if (arvoreChapas != NULL) {
        ImprimeArvoreChapas(arvoreChapas->esquerda);
        
        printf("Candidato: %s\n", arvoreChapas->c->nomeCandidato);
        printf("Número: %d\n", arvoreChapas->c->numero);

        printf("-------------------------------\n");
        
        ImprimeArvoreChapas(arvoreChapas->direita);
    }
}


void Votar(Arvore* arvChapas , int numero){


    if(numero == 0){

    }

}

Arvore* EsvaziarArvore(Arvore* a){
    if (!ArvoreVazia(a)){
        EsvaziarArvore(a->esquerda);
        EsvaziarArvore(a->direita);
        free(a->c);
        free(a);
    }
    return NULL;
}