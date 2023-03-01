/******************************************************************************

Dada uma sequência de números inteiros com n elementos, determinar quantas
subsequências de números iguais consecutivos compõem essa sequência.
Exemplos:
a) A sequência 5 2 2 3 4 4 4 4 4 1 1, é composta por 5 subsequências:
(5), (2,2), (3), (4, 4, 4, 4, 4), (1,1);
b) A sequência: 3 3 -1 -1 -1 12 12 12 3 3 é composta por 4 subsequências:
(3,3), (-1, -1, -1), (12, 12, 12), (3,3);

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *s, n1, n2, i, j, total = 0;
	
    printf("Informe o tamanho da sequencia: ");
    scanf("%d", &n1);
	
	s = (int*)malloc(n1 * sizeof(int));
	
	printf("Informe os valores para a sequencia: ");
	for (i = 0; i < n1; i++)
		scanf("%d", &s[i]);
	
	for (i = 0; i < n1; i++){
		for (j = i+1; j < n1; j++){
			printf("Comparando s[%d] = %d com s[%d] = %d\n", i, s[i], j, s[j]);

			if (s[i] != s[j]){
				total++;
				i = j;
				break;
			}			
			
		}		
	}
	
	printf("Total: %d\n", total);
	
    free(s);
	
    return 0;
	
}