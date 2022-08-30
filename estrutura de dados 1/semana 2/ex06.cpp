#include <bits/stdc++.h>
using namespace std;

struct Aluno{
    string nome, tia, email, curso;
    int semestre;
};

void insereAluno(struct Aluno *aluno, int *i){
    cout << "informe o nome do aluno: "; cin >> aluno[*i].nome;
    cout << "informe o tia do aluno: "; cin >> aluno[*i].tia;
    cout << "informe o email do aluno: "; cin >> aluno[*i].email;
    cout << "informe o curso do aluno: "; cin >> aluno[*i].curso;
    cout << "informe o semestre do aluno: "; cin >> aluno[*i].semestre;

    *i = *i + 1;
}

void apresentaAluno(struct Aluno aluno[], string tia, int n){
    
    for(int i = 0; i < n; i++){
        if(tia == aluno[i].tia){
            cout << aluno[i].nome << endl;
            cout << aluno[i].email << endl;
            cout << aluno[i].curso << endl;
            cout << aluno[i].semestre << endl;
            return;
        }
    }
}

void alteraDados(struct Aluno *aluno, string tia, int n){
    int num, semestre, i;
    string curso;

    for(i = 0; i < n; i++){
        if(tia == aluno[i].tia){
            cout << "digite o novo curso: "; cin >> curso;
            aluno[i].curso = curso;
    
            cout << "digite o novo semestre: "; cin >> semestre;
            aluno[i].semestre = semestre;

            break;
        }
    }

    
}

void mostraAlunos(struct Aluno aluno[], string curso, int length){
    for(int i = 0; i < length; i++){
        if(aluno[i].curso == curso){
            apresentaAluno(aluno, aluno[i].tia, length);
        }
    }
}

void removeAluno(struct Aluno aluno[], string tia, int *n){
    int flag = 0;

    for(int i = 0; i < *n; i++){
        if(aluno[i].tia == tia || flag == 1){
            flag = 1;
            aluno[i] = aluno[i+1];
        }
    }

    if(flag == 1){
        *n = *n;
    }
}

void menu(struct Aluno alunos[], int *n){
    int opt;
    string tia, curso;

    cout << "\n1) Inserir um aluno\n2) Alterar o curso/semestre de um aluno";
    cout <<"\n3) Apresentar os dados de um aluno\n4) Mostrar todos os alunos de um curso\n";
    cout << "5) Remover um aluno do curso\n6) Sair\n";

    cin >> opt;

    switch(opt){
        case 1:
            insereAluno(alunos, n);
            break;
        case 2:
            cout << "informe o tia do aluno: "; cin >> tia;
            alteraDados(alunos, tia, *n);
            break;
        case 3:
            cout << "informe o tia do aluno: "; cin >> tia;
            apresentaAluno(alunos, tia, *n);
            break;
        case 4:
            cout << "informe o curso do aluno: "; cin >> curso;
            mostraAlunos(alunos, curso, *n);
            break;
        case 5:
            cout << "informe o tia do aluno: "; cin >>tia;
            removeAluno(alunos, tia, n);
            break;
        case 6:
            exit(EXIT_SUCCESS);
    }
    menu(alunos, n);
}

int main(){
    Aluno alunos[200];
    int length = 0;
    int *n = &length;

    menu(alunos, n);

    return 0;
}