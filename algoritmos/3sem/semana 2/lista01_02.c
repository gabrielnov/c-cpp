#include<stdio.h>

int primos();

int main(){

    int a, b, i;

    printf("Informe um numero: ");
    scanf("%d", &a);

    printf("\nInforme um outro numero: ");
    scanf("%d", &b);

    for (i = a; i <= b; i++){

        if(primos(i) == 1){
            printf("%d eh primo\n", i);
        }
        else{
            printf("%d nao eh primo\n", i);
        }
    }
}


int primos(int n){

    int i;


    int p[4] = {2,3,5,7};

    for (i = 0; i < 4; i++){
        if (n == p[i]){
          return 1;
        }

        if (n % p[i] == 0){
            return 0;
        }
    }

  return 1;
}
