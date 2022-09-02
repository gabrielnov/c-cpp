#include <stdio.h>
#include <string.h>

struct Produto{
  int cod;
  char nome[20];
  float preco;
};


void cadastrarProduto(struct Produto p[], int *total);

void listarProdutos(struct Produto p[], int total);

void mostrarProduto(struct Produto p[], int total, int cod);

void mostrarProduto(struct Produto p[], int total, int cod){
    int i;

    for (i = 0; i < total; i++){
        if (cod == p[i].cod){
            printf("\n%s | Codigo %d  | Preco R$ %f\n", p[i].nome, p[i].cod, p[i].preco);
            return;
        }
        
    }

    printf("\nProduto com codigo %d nao encontrado! \n", cod);
}

void listarProdutos(struct Produto p[], int total){
    int i;

    for (i = 0; i < total; i++){
        printf("%s | Codigo %d  | Preco R$ %f\n", p[i].nome, p[i].cod, p[i].preco);
    }
}

void cadastrarProduto(struct Produto p[], int *total){
  char nome[20];
  float preco; 
  int cod;

  printf("digite o nome do produto: ");
  scanf("%s", nome);

  printf("digite o preco do produto: ");
  scanf("%f", &preco);

  printf("digite o codigo do produto: ");
  scanf("%d", &cod);

  struct Produto novo;
  strcpy(novo.nome, nome);
  novo.preco = preco;
  novo.cod = cod;

  p[*total] = novo;

  *total += 1;
  
  printf("produto inserido!\n\n");  
}

int main() {
    struct Produto p[20];
    int *total;
    int t = 0;
    total = &t;

    cadastrarProduto(p, total);
    cadastrarProduto(p, total);

    listarProdutos(p, *total);
    mostrarProduto(p, *total, 123);

    return 0;
}
  