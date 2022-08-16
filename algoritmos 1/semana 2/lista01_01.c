#include<stdio.h>

int primos();

int main(){

  int primo;
  primo = primos();
  primo == 1 ? printf("eh primo\n") : printf("nao eh primo\n");

}


int primos(){

    int a, i;

    printf("Informe um numero: ");
    scanf("%d", &a);

    int n[4] = {2,3,5,7};

    for (i = 0; i < 4; i++){
        if (a == n[i]){
          return 1;
        }

        if (a % n[i] == 0){
            return 0;
        }
    }

  return 1;
}
