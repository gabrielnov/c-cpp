#include <stdio.h>
#include <string.h>

struct Aluno{
  char nome[20];
  float nota1;
  float nota2;
};

void insereAluno(struct Aluno a[], int *total);
void mostraAlunos(struct Aluno a[], int *total);

void insereAluno(struct Aluno a[], int *total){
  char nome[20];
  float n1; float n2;

  printf("digite o nome do aluno: ");
  scanf("%s", nome);

  printf("digite a primeira nota do aluno: ");
  scanf("%f", &n1);

  printf("digite a segunda nota do aluno: ");
  scanf("%f", &n2);

  struct Aluno novo;
  strcpy(novo.nome, nome);
  novo.nota1 = n1;
  novo.nota2 = n2;

  a[*total] = novo;

  *total += 1;
  
  printf("aluno inserido!\n\n");  
}

void mostraAlunos(struct Aluno a[], int *total){
  int i;
  
  float media;
  
  for (i = 0; i < *total; i++){
    media = (a[i].nota1 + a[i].nota2) /2;

    printf("%s | Média %.2f\n", a[i].nome, media);
  }
}

int main() {
    struct Aluno a[200];
    int *total;
    int t = 0;
    total = &t;

    insereAluno(a, total);
    insereAluno(a, total);
    mostraAlunos(a, total);
    return 0;
}
  