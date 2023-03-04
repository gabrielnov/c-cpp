/******************************************************************************

Dada uma sequência de números inteiros com n elementos, faça uma função na
linguagem C para determinar o comprimento de um segmento crescente de
tamanho máximo.
Exemplos:
Na sequência 5 10 3 2 4 7 9 8 5 o comprimento do segmento crescente
máximo é 4 (2, 4, 7, 9).
Na sequência 10 8 7 5 2 o comprimento do segmento crescente máximo é 1

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *s, *p, n, i, j, max = 0, aux;
	
    printf("Informe o tamanho da sequencia: ");
    scanf("%d", &n);
	
	s = (int*)malloc(n * sizeof(int));
	p = (int*)malloc(n * sizeof(int));

	printf("Informe os valores para a sequencia: ");
	for (i = 0; i < n; i++)
		scanf("%d", &s[i]);

	if (n > 1){
		for (i = 0; i < n; i++){
			aux = 1;
			for (j = i+1; j < n; j++){
				if (s[j-1] < s[j]){
					p[aux-1] = s[j-1];
					p[aux] = s[j];
					aux++;
				} else
					break;
			}
			if (aux > max)
				max = aux;
			i = j-1;
		}

		for(i = 0; i < max; i++)
			printf("%d ", p[i]);
	}

	printf("\nMaior sequencia: %d\n", max);

	free(s);
	free(p);
	
    return 0;	
}