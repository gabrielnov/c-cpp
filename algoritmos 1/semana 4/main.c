#include "ex1.h"
#include "ex2.h"
#include <stdio.h>

int main(){
    int opt;
    printf("\n1- Primeiro Exercicio \n2- Segundo exercicio\nDigite a opcao: ");
    scanf("%d", &opt);

    if (opt == 1)
        ex1();
    if (opt == 2)
        ex2();
    
    main();

}