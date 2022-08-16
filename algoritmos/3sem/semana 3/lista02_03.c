#include <stdio.h>
#include <string.h>

int main() {
    char a[10];  
    int i;

    printf("Informe uma palavra: ");
    gets(a);


    for (i = 0; i < strlen(a); i++){
        printf("Caractere '%c' em ASCII: %d\n", a[i], a[i]);    
    }  
}
  