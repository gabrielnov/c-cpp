#include <stdio.h>

int result(int n);

int result(int n){
    if (n == 1)
        return 2;
    else
        return 2 * result(n - 1);
}

int main(){
    printf("%d", result(5));
}