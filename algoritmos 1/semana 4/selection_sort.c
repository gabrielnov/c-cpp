#include "selection_sort.h"

void selection(int* vetor, int n){
    clock_t t;
    t = clock();

    int i, j, min, aux;

    for (i = 0; i < n; i++){
        min = i;

        for (j = i + 1; j < n; j++){
            if (vetor[j] < vetor[min])
                min = j;
        }

        aux = vetor[i];
        vetor[i] = vetor[min];
        vetor[min] = aux;
    }

    t = clock() - t;
    double total = ((double)t)/CLOCKS_PER_SEC;

    printf("Selection sort levou %f segundos para ordenar %d numeros.\n", total, n);
}