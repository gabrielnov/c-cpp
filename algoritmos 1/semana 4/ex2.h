#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char turma; 
    unsigned int matricula;
    float nota;
} Aluno; 


void sortTurma(Aluno *v, int n);
void sortMatricula(Aluno *v, int n);
void sortNota(Aluno *v, int n);
void sortNotaInv(Aluno *v, int n, char turma);
void showAlunos(Aluno *aluno, int size);
void ex2();
