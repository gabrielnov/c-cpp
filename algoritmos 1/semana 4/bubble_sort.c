#include <stdio.h>
#include <time.h>
#include "bubble_sort.h"

void bubble(int* vetor, int n){
    clock_t t;
    t = clock();
   
    int i, j, aux;

    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if (vetor[i] > vetor[j]){
                aux = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = aux;
            }
        }
    }

    t = clock() - t;
    double total = ((double)t)/CLOCKS_PER_SEC;

    printf("\n\nBubble sort levou %.2f segundos para ordenar %d numeros.\n", total, n);
}