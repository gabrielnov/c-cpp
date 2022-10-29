#include <stdio.h>

int soma(int num){

    if (num == 0)
        return 0;

    return num % 10 + soma(num / 10);
}

int main(){
    printf("%d", soma(222));
}
