#include <stdio.h>

int soma(int s[5], int size){
    if(size <= 0)
        return 0;
    
    if (s[size] % 2 == 0)
        return s[size] + soma(s, size - 1);
    
    return soma(s, size - 1);
}

int main(){

    int s[10] = {0, 22, 2, 22, 5};

    printf("%d", soma(s, 5));
}