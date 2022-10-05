#include <stdio.h>
#include "gera_vetor.h"
#include "bubble_sort.h"
#include "insertion_sort.h"
#include "selection_sort.h"

int main(){
    int *v1, v2, v3, i;

    v1 = geraVetor(100);

    for(i = 0; i < 100; i++){
        printf("%d ", v1[i]);
    }

    insertion(v1, 100);

    printf("\n\nDepois do sort: \n\n");

    for(i = 0; i < 100; i++){
        printf("%d ", v1[i]);
    }
    
}