#include <stdio.h>

int soma(int s[5], int size){
    if(size <= 0)
        return 0;
 
    return soma(s, size - 1) + s[size-1];
}

int main(){

    int s[10] = {0, 21, 2, 3, 5};

    printf("%d", soma(s, 5));
}