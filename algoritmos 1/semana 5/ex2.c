#include <stdio.h>

int recursao (int n);

int recursao (int n){
    if (n <= 10)
        return n * 2;
    else
        return recursao(recursao(n/3));
}

int main(){
    printf("%d", recursao(27));
}