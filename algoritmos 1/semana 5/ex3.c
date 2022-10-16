#include <stdio.h>

int count = 0;

int fibonacci(int n);

int fibonacci(int n){
    count++;

    if ((n == 0) || (n == 1))
        return n;
    else
         return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    int f = fibonacci(5); 
    printf("fib(5) = %d", count - 1);
    printf(" calls = %d", f);
}