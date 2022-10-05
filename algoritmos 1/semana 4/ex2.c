#include "ex2.h"

void sortTurma(Aluno *v, int n){
    int k, j;
    Aluno aux;

    for (k = 1; k < n; k++) {
        for (j = 0; j < n-1; j++) {
            if (v[j].turma > v[j+1].turma) {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

void sortMatricula(Aluno *v, int n){
    int k, j;
    Aluno aux;
    for (k = 1; k < n; k++) {
        for (j = 0; j < n-1; j++) {
            if (v[j].matricula > v[j+1].matricula) {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

void sortNota(Aluno *v, int n){
    int k, j;
    Aluno aux;
    for (k = 1; k < n; k++) {
        for (j = 0; j < n-1; j++) {
            if (v[j].nota > v[j+1].nota) {
                aux = v[j];
                v[j]= v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

void sortNotaInv(Aluno *v, int n, char turma){
    int k, j;
    Aluno aux;
    for (k = 1; k < n; k++) {
        for (j = 0; j < n-1; j++) {
            if(toupper(v[j].turma) == toupper(turma) && toupper(v[j+1].turma) == toupper(turma)){
                if (v[j].nota < v[j+1].nota) {
                    aux = v[j];
                    v[j] = v[j+1];
                    v[j+1] = aux;
                }
            }
        }
    }
}

void showAlunos(Aluno *aluno, int size){
    for(int i = 0; i < size-1; i++){
        printf("%c %d %0.1lf\n", aluno[i].turma, aluno[i].matricula, aluno[i].nota);
    }
}

void showAlunos2(Aluno *aluno, int size, char turma){
    for(int i = 0; i < size-1; i++){
        if(toupper(aluno[i].turma) == toupper(turma)){ 
            printf("%c %d %0.1lf\n", aluno[i].turma, aluno[i].matricula, aluno[i].nota);
        }
    }
}

void ex2(){
    FILE *file;

    char ch[100], turma;
    int qntd, i = 0, opt, matricula;
    float nota;

    Aluno *aluno;

    file = fopen("alunos.txt", "r");

    if (file == NULL) {
        printf("Erro ao tentar abrir o arquivo!\n");
        exit(40);
    }

    fgets(ch, 100, file);
    qntd = atoi(ch);

    aluno = (Aluno*)malloc(qntd * sizeof(Aluno));
    
    while(fgets(ch, sizeof(ch), file)){
        fscanf(file, "%c %d %f", &aluno[i].turma, &aluno[i].matricula, &aluno[i].nota);
        i++;  
    }

    while (opt != 0){
        printf("1- Ordenado por turma e matricula.\n");
        printf("2- Ordenado por nota uma classificacao geral de todas as turmas.\n");
        printf("3- Solicite uma turma e mostre somente os alunos da turma em ordem de matricula.\n");
        printf("4- Solicite uma turma e mostre somente os alunos da turma em ordem decrescente nota.\n");
        printf("0- Sair.");
        
        printf("\nInforme a opcao desejada: "); 
        scanf("%d", &opt);
   
        switch (opt){    
        case 1:
            sortMatricula(aluno, qntd);
            sortTurma(aluno, qntd);
            showAlunos(aluno, qntd);
            break;
        case 2:
            sortNota(aluno, qntd);
            showAlunos(aluno, qntd);
            break;
        case 3:
            fflush(stdin);
            printf("digite a turma: "); 
            scanf("%c", &turma);
            sortMatricula(aluno, qntd);
            showAlunos2(aluno, qntd, turma);
            break;
        case 4:
            fflush(stdin);
            printf("digite a turma: "); scanf("%c", &turma);
            sortNotaInv(aluno, qntd, turma);
            showAlunos2(aluno, qntd, turma);
            break;
        case 0:
            exit(0);
        fclose(file);
        }
    }
}