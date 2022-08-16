#include <stdio.h>

int main(){

    int n, r = 0;

    printf("Informe o valor: ");
    scanf("%d", &n);

    while (n != 0)
    {
        r = r * 10;
        r += n % 10;
        n = n / 10;
    }

    printf("Valor invertido: %d", r);
}