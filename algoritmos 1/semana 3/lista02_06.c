#include <stdio.h>
#include <string.h>

int main() {
 
    char b, a[10];
    int i, cont = 0;
  
    printf("Informe uma palavra: ");

    scanf("%s",a);

    printf("Informe uma letra: ");
    scanf("%s", &b);

    for (i = 0; i < strlen(a); i++){
        if (a[i] == b){
            cont++;
        }
    }

    printf("A letra '%c' aparece na palavra '%s' %d vezes\n", b, a, cont);
    
}
  