#include <stdio.h>
#include <string.h>

struct Pessoa{
  char nome[20], sexo;
  int altura, peso, cpf;
  
};

void inserePessoa(struct Pessoa p[], int *total);
void mostraPessoa(struct Pessoa p[], int *total);

void inserePessoa(struct Pessoa p[], int *total){
  char nome[20], sexo;
  int altura, peso, cpf;

  printf("digite o nome da pessoa: ");
  scanf("%s", nome);

  printf("digite o sexo da pessoa: ");
  scanf("%s", &sexo);

  printf("digite a altura da pessoa: ");
  scanf("%d", &altura);

  printf("digite a peso da pessoa: ");
  scanf("%d", &peso);

  printf("digite o cpf da pessoa: ");
  scanf("%d", &cpf);

  
  struct Pessoa nova;
  strcpy(nova.nome, nome);
  nova.sexo = sexo;
  nova.altura = altura;
  nova.peso = peso;
  nova.cpf = cpf;
  
  p[*total] = nova;

  *total += 1;
  
  printf("Pessoa inserida!\n\n");  
}

void mostraPessoa(struct Pessoa p[], int *total){
  int i, cpf;
  float imc;

  printf("insira o cpf da pessoa: ");
  scanf("%d", &cpf);

  for (int i =0; i < *total; i++){
    if (p[i].cpf == cpf){
      printf("Peso = %d | Altura = %d\n", p[i].peso, p[i].altura);
      imc = (float) p[i].peso / (float) (p[i].altura * p[i].altura);
      printf("IMC da pessoa: %.2f\n", imc * 10000);
    }
  }
  
}

int main() {
    struct Pessoa p[200];
    int *total;
    int t = 0;
    total = &t;

    inserePessoa(p, total);
    mostraPessoa(p, total);
    
    return 0;
}
  