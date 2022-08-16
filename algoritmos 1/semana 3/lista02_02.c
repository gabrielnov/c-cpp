#include <stdio.h>
#include <string.h>

int main() {
    char a[10], b[10], c[10];
    int i, j;

    printf("Informe uma palavra: ");
    scanf("%s", &a);

    printf("Informe uma palavra: ");
    scanf("%s", &b);

    printf("Informe uma palavra: ");
    scanf("%s", &c);

    printf("Palavras em ordem alfabética: \n");

    if (strcmp(a, b) < 0){
        if (strcmp(b, c) < 0){
            printf("%s\n%s\n%s\n", a, b, c);
        }
        else{
            printf("%s\n%s\n%s\n", a, c, b);
        }
    }
    else{
        if (strcmp(a, c) < 0){
            printf("%s\n%s\n%s\n", b, a, c);
        }
        else{
            printf("%s\n%s\n%s\n", b, c, a);
        }
    }

    return 0;
}
  