#include <stdio.h>
#include <string.h>

int main() {
    char a[10], b[10];  
    int i = 0, j;

    printf("Informe uma palavra: ");
    scanf("%s", &a);
    
    strcpy(b, a);
    strrev(b);


    if (strcmp(a, b) != 0){
        printf("%s nao eh palindromo.", a);
        return 0;
    }

    printf("%s eh palindromo.", a);
    return 0;
}
  