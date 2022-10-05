#include "sort_verifier.h"

void verificaOrdenacao(int *vetor, int n){

    for(int i = 0; i < n-1; i++){
        if(vetor[i] > vetor[i+1]){
            printf("Vetor nao esta ordenado!\n");
            return;
        }
    }

    printf("Vetor esta ordenado!\n");
}