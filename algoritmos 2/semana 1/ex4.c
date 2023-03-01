/******************************************************************************

Escreva uma função booleana na linguagem C que receba duas sequências e
decida se a sequência s[i..k] é um segmento da sequência a[1..n].

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, i, j, f = 0;
    int *s1, *s2;
	
    printf("Informe o tamanho da primeira sequencia: ");
    scanf("%d", &n1);

    printf("Informe o tamanho da segunda sequencia: ");
    scanf("%d", &n2);
    
	s1 = (int*)malloc(n1 * sizeof(int));
	s2 = (int*)malloc(n2 * sizeof(int));
    	
	printf("Informe os valores para a primeira sequencia: ");
	for (i = 0; i < n1; i++)
		scanf("%d", &s1[i]);
	
	printf("Informe os valores para a segunda sequencia: ");
	for (i = 0; i < n2; i++)
		scanf("%d", &s2[i]);

	for (i = 0; i < n2; i++){
		for (j = 0; j < n1; j++){
			if (s2[i] == s1[j]){
				f = 1;
				break;
			} else {
				f = 0;
			}
		}
	}
	if (f == 0)
		printf("Nao eh segmento!");
	else
		printf("Eh segmento!");
	
    free(s1);
    free(s2);
    return 0;
}
