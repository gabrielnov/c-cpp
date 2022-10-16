#include <stdio.h>

int busca_linear(int s[5], int size, int elem){
    size--;

    if (size < 0) {
        return -1;
    }

    if (s[size] == elem)
        return size;

    return busca_linear(s, size, elem);
}

int main(){

    int s[10] = {0, 21, 2, 3, 5};

    printf("%d", busca_linear(s, 5, 21));
}