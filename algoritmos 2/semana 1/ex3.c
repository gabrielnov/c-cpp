/******************************************************************************

Escreva uma função booleana na linguagem C que receba duas sequências e
decida se a sequência s[1..k] é uma subsequência da sequência a[1..n].

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, i, j, f;
    int *s1, *s2;
	
    printf("Informe o tamanho da primeira sequencia: ");
    scanf("%d", &n1);

    printf("Informe o tamanho da segunda sequencia: ");
    scanf("%d", &n2);
    
	if (n2 > n1){
		printf("Nao eh subsequencia");
		exit(1);
	}
	
	s1 = (int*)malloc(n1 * sizeof(int));
	s2 = (int*)malloc(n2 * sizeof(int));
    
	printf("Informe os valores para a primeira sequencia: ");
	for (i = 0; i < n1; i++)
		scanf("%d", &s1[i]);
	
	printf("Informe os valores para a segunda sequencia: ");
	for (i = 0; i < n2; i++)
		scanf("%d", &s2[i]);
	
	// checando se é subsequencia
	for (i = 0; i < n2; i++){
		f = 0;
		for (j = 0; j < n1; j++){
			if (s1[i] == s2[j]){
				f = 1;
				break;
			}
		}
				
	}
	if (f == 0)
		printf("Nao eh subsequencia!");
	else
		printf("Eh subsequencia!");
	
    free(s1);
    free(s2);
    return 0;
}
