#include <stdio.h>
#include <string.h>

int main() {
    char palavra[10], letra, final[10];
    int i, j = 0;

    printf("Informe uma palavra: ");
    scanf("%s", &palavra);

    printf("\nInforme uma letra: ");

    scanf(" %c", &letra);

    for (i = 0; i < 10; i++){
        if (palavra[i] != letra){
            final[j] = palavra[i];
            j++;
        }
    }

    printf("Palavra '%s' sem a letra '%c': %s\n", palavra, letra, final);
    return 0;
}
  