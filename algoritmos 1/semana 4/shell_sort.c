#include "shell_sort.h"

void shell(int* vetor, int n) {
    clock_t start = clock();

    int i, j, value;
 
    int h = 1;
    while(h < n) {
        h = 3*h+1;
    }
    while (h > 0) {
        for(i = h; i < n; i++) {
            value = vetor[i];
            j = i;
            while (j > h-1 && value <= vetor[j - h]) {
                vetor[j] = vetor[j - h];
                j = j - h;
            }
            vetor[j] = value;
        }
        h = h/3;
    }

    clock_t end = clock();
    float total = (float)(end - start) / CLOCKS_PER_SEC;
    
    printf("Shell sort levou     %f segundos para ordenar %d numeros.\n", total, n);
}
