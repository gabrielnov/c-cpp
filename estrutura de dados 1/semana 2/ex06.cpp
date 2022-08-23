#include <iostream>
#include <string>
#define MAX 200

using namespace std;

struct Aluno{
    string nome;   
    string tia;
    string email;
    string siglaCurso;
    int semestre = 1;
};

struct ListaAlunos{
    Aluno lista[MAX];
    int proximaPos = 0;
};

void insereAluno(Aluno a, ListaAlunos *l){
    l->lista[l->proximaPos] = a;
    l->proximaPos++;
}

void mostraAlunos(ListaAlunos *l){
    for (int i = 0; i < l->proximaPos; i++){
        cout << "\nNome " << l->lista[i].nome;
        cout << " | Curso: " << l->lista[i].siglaCurso;
        cout << " | Semestre: " << l->lista[i].semestre;
        cout << " | TIA: " << l->lista[i].tia << endl;
    }
}

void buscaAluno(string tia, ListaAlunos *l){
     for (int i = 0; i < l->proximaPos; i++){
        if (l->lista[i].tia == tia){
            cout << "\nNome " << l->lista[i].nome;
            cout << " | Curso: " << l->lista[i].siglaCurso;
            cout << " | Semestre: " << l->lista[i].semestre;
            cout << " | TIA: " << l->lista[i].tia << endl;
            return;
        }
    }

    cout << "Aluno não encontrado.";
}

void alteraDados(string tia, ListaAlunos *l){
    buscaAluno(tia, l);
    int r, s;
    string c;

    cout << "\nDeseja alterar o semestre e curso? 1 - Sim   2 - Não: ";
    cin >> r;

    if (r == 1){
        cout << "Informe o novo semestre: "; cin >> s;
        cout << "Informe o novo curso: "; cin >> c;

        for (int i = 0; i < l->proximaPos; i++){
        if (l->lista[i].tia == tia){
            l->lista[i].semestre = s;
            l->lista[i].siglaCurso = c;
        }
    }
    }


}
int main(){
    Aluno a1;
    
    a1.nome = "Gabriel";
    a1.siglaCurso = "CC";
    a1.tia = "124321";

    ListaAlunos l;
    insereAluno(a1, &l);

    mostraAlunos(&l);
    alteraDados("124321", &l);
    
    buscaAluno("124321", &l);

    return 0;
}