#include <stdio.h>
#include <stdlib.h>
#include "gera_vetor.h"

int n, i, *vetor;

int* geraVetor(int n){
    vetor = (int*) malloc(n * sizeof(int));

    for (i = 0; i < n; i++){
        vetor[i] = rand() % 100;
    }

    printf("Vetor gerado!\n\n");
    
    return vetor;
}