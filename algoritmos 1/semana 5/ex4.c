#include <stdio.h>

int potencia(int n, int p){
    if (p == 0)
        return 1;
    else
        return n * potencia(n, p-1);
}

int main(){
    printf("%d", potencia(3, 2));
}