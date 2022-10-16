#include <stdio.h>

int produto(int a, int b){
    if (b == 1)
        return a;
    
    return a * (b - 1) + a;    
}

int main(){
    int a = 11, b = 10;

    printf("%d x %d = %d", a, b, produto(a, b));
}