#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "eleicoes.h"

int main(){

    int numEleitores, numChapas, i = 0, j = 0, numCandidato, op;

    Arvore* arvChapas = CriaArvore();

    printf("Quantos eleitores deseja cadastrar? ");
    scanf("%d", &numEleitores);

    printf("Quantas chapas deseja cadastrar? ");
    scanf("%d", &numChapas);

    do{

       

    }while(i < numChapas);

    do{

        printf("\n=== Candidatos Disponíveis ===\n\n");

        ImprimeArvoreChapas(arvChapas);

        printf("\nDigite o número do candidato que você deseja votar e pressione Enter: ");
        scanf("%d", numCandidato);

        Votar(arvChapas, numCandidato);


    }while(j < numEleitores);








    return 0;
}