#include "ex1.h"

void ex1(){
    int *v1, *v2, *v3, *v4;

    printf("===== VETOR DE 1000 NUMEROS =====\n");
    v1 = geraVetor(1000);
    v2 = geraVetor(1000);
    v3 = geraVetor(1000);
    v4 = geraVetor(1000);

    bubble(v1, 1000);
    insertion(v2, 1000);
    selection(v3, 1000);
    shell(v4, 1000);

    printf("\n\n===== VETOR DE 5000 NUMEROS =====\n");
    v1 = geraVetor(5000);
    v2 = geraVetor(5000);    
    v3 = geraVetor(5000);
    v4 = geraVetor(5000);

    bubble(v1, 5000);
    insertion(v2, 5000);
    selection(v3, 5000);
    shell(v4, 5000);

    printf("\n\n===== VETOR DE 10000 NUMEROS =====\n");
    v1 = geraVetor(10000);
    v2 = geraVetor(10000);
    v3 = geraVetor(10000);
    v4 = geraVetor(10000);

    bubble(v1, 10000);
    insertion(v2, 10000);
    selection(v3, 10000);
    shell(v4, 10000);
}