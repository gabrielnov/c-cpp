#include <stdio.h>

int conta_pares(int v[10]);
float calcula_media(int v[10]);
void ordena(int v[10]);

int main(){

    int i, v[10];
    
    for (i = 0; i < 10; i++){
        printf("Informe um valor: ");

        scanf("%d", &v[i]);        
    }

    ordena(v);

    printf("\nMenor numero da lista: %d", v[0]);
    printf("\nMaior numero da lista: %d", v[9]);
    printf("\nQuantidade de numeros pares na lista: %d", conta_pares(v));

    float media = calcula_media(v);

    printf("\nMedia dos numeros contidos na lista: %.2f", media);

    printf("\nNumeros menores que %.2f: ", media);

    for (i = 0; i < 10; i++){
        if (v[i] > (int) media){
            break;
        }

        printf(" %d ", v[i]);
    }
}

void ordena(int v[10]){

    int i, j, a; 

    for (i = 0; i < 10; i++){
        for (j = i+1; j < 10; j++){
            if (v[i] > v[j]){
                a = v[j];
                v[j] = v[i];
                v[i] = a;
            }
          
        }
    }

  
}

int conta_pares(int v[10]){

    int i, cont = 0;
    for (i = 0; i < 10; i++){
        if (v[i] % 2 == 0){
            cont++;
        }
    }

    return cont;
}

float calcula_media(int v[10]){

    int i;
    float soma = 0;

    for (i = 0; i < 10; i++){
        soma += v[i];
    }

    return soma / 10;
}