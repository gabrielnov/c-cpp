#include "bubble_sort.h"

void bubble(int* vetor, int n){
    clock_t start = clock();
   
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

    clock_t end = clock();
    float total = (float)(end - start) / CLOCKS_PER_SEC;

    printf("Bubble sort levou    %f segundos para ordenar %d numeros.\n", total, n);
}