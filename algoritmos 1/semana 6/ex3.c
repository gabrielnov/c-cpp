#include <stdio.h>

int contador(int num){

    if (num < 10)
        return 1;

    return 1 + contador(num / 10);
}

int main(){
    printf("%d", contador(2223));
}
