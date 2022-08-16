#include <stdio.h>
int verifica_ordenacao(int v[10]);

int main(){

    int v[10] = {0, 1, 2, 3, 4, 5, 6,1 , 8, 9};

    int result;
    result = verifica_ordenacao(v);

    printf("%d", result);


}

int verifica_ordenacao(int v[10]){

    int i, j;

    for (i = 0; i < 10; i++){

        for (j = i + 1; j < 10; j++){

            if (v[i] > v[j]){
                return 0;
            }
        }
    }

    return 1;
}