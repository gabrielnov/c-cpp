#include <stdio.h>
#include <time.h>
#include "insertion_sort.h"

void insertion(int* vetor, int n){
    clock_t t;
    t = clock();

    int i, j, aux;

    for (int i = 1; i < n; i++){
        aux = vetor[i];
        
        j = i -1;
        
        while (j >= 0 && vetor[j] > aux) {
            vetor[j+1] = vetor[j];
            j = j - 1;
        }

        vetor[j+1] = aux;
    }
    
    
    t = clock() - t;
    double total = ((double)t)/CLOCKS_PER_SEC;

    printf("\n\nInsertion sort levou %.2f segundos para ordenar %d numeros.\n", total, n);
}