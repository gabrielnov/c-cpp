#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class Aluno{
	private:
		string nome, tia, email, curso;
		int semestre;
	public:
		Aluno(){};
		Aluno(string nome, string tia, string email, string curso, int semestre);
		void setNome(string nome) { this->nome = nome;};
		void setTia(string tia) { this->tia = tia;};
		void setEmail(string email) { this->email = email;};
		void setCurso(string curso) { this->curso = curso;};
		void setSemestre(int semestre) { this->semestre = semestre;};
		string getNome(){ return this->nome;};
		string getTia(){ return this->tia;};		
		string getEmail(){ return this->email;};
		string getCurso(){ return this->curso;};
		int getSemestre(){ return this->semestre;};
};

class Alunos{
	private:
		Aluno aluno[100];
		int total;
	public:
		// Construtor
		Alunos(){ this->total = 0; };
		// Getters e Setters
		void setTotal(int total) { this->total = total;};
		int getTotal(){ return total; };
		// Métodos internos
		void insereAluno(string nome, string tia, string email, string curso, int semestre);
		void apresentaAluno(string tia);
        void alteraDados(string tia, string curso, int semestre);
        void mostraAlunos(string curso);
        void removeAluno(string tia);
};

void Alunos::insereAluno(string nome, string tia, string email, string curso, int semestre){ 
    aluno[total].setNome(nome);
	aluno[total].setTia(tia);
	aluno[total].setEmail(email);
	aluno[total].setCurso(curso);
	aluno[total].setSemestre(semestre);
    total++;
}

void Alunos::apresentaAluno(string tia){

	for(int i = 0; i < total; i++){
		if (tia.compare(aluno[i].getTia()) == 0){
			cout << "\n\nNome: " << aluno[i].getNome() << ", TIA: " << aluno[i].getTia() << ", Curso: " << aluno[i].getCurso() << ", Semestre: " << aluno[i].getSemestre() << endl;
			return;
		}
	}
	cout << "Aluno de TIA " << tia << " não encontrado!" << endl;
}

void Alunos::alteraDados(string tia, string curso, int semestre){
    for(int i = 0; i < total; i++){
		if (tia.compare(aluno[i].getTia()) == 0){
			aluno[i].setCurso(curso);
            aluno[i].setSemestre(semestre);
            return;
		}
	}
    cout << "Aluno de TIA " << tia << " não encontrado!" << endl;
}

void Alunos::mostraAlunos(string curso){
    int totalCurso = 0;
    for(int i = 0; i < total; i++){
        if (curso.compare(aluno[i].getCurso()) == 0){
            totalCurso++;
            cout << "\nNome: " << aluno[i].getNome() << ", TIA: " << aluno[i].getTia() << ", Curso: " << aluno[i].getCurso() << ", Semestre: " << aluno[i].getSemestre();
        }
    }

    if (totalCurso == 0){
        cout << "Nenhum aluno encontrado no curso de " << curso << endl;
    }
}

void Alunos::removeAluno(string tia){
    Aluno a2;

    for(int i = 0; i < total; i++){
        if (aluno[i].getTia() == tia){
            for(int j = i; j < total; j++){
                aluno[j].setNome(aluno[j+1].getNome());
                aluno[j].setCurso(aluno[j+1].getCurso());
                aluno[j].setEmail(aluno[j+1].getEmail());
                aluno[j].setSemestre(aluno[j+1].getSemestre());
                aluno[j].setTia(aluno[j+1].getTia());
            }
        }
    }
}

void menu(Alunos *alunos){
    int opt, semestre;
    string tia, curso, nome, email;

    cout << "\n1) Inserir um aluno\n2) Alterar o curso/semestre de um aluno";
    cout <<"\n3) Apresentar os dados de um aluno\n4) Mostrar todos os alunos de um curso\n";
    cout << "5) Remover um aluno do curso\n6) Sair\n";

    cin >> opt;

    switch(opt){
        case 1:
            cout << "informe o nome do aluno: "; cin >> nome;
            cout << "informe o tia do aluno: "; cin >> tia;
            cout << "informe o email do aluno: "; cin >> email;
            cout << "informe o curso do aluno: "; cin >> curso;
            cout << "informe o semestre do aluno: "; cin >> semestre;
            alunos->insereAluno(nome, tia, email, curso, semestre);
            break;
        case 2:
            cout << "informe o tia do aluno: "; cin >> tia;
            cout << "informe o novo semestre do aluno: "; cin >> semestre;
            cout << "informe o novo curso do aluno: "; cin >> curso;
            alunos->alteraDados(tia, curso, semestre);
            break;
        case 3:
            cout << "informe o tia do aluno: "; cin >> tia;
            alunos->apresentaAluno(tia);
            break;
        case 4:
            cout << "informe o curso do aluno: "; cin >> curso;
            alunos->mostraAlunos(curso);
            break;
        case 5:
            cout << "informe o tia do aluno: "; cin >>tia;
            alunos->removeAluno(tia);
            break;
        case 6:
            exit(EXIT_SUCCESS);
    }
    menu(alunos);
}
int main(){
    Alunos alunos;

    menu(&alunos);
    return 0;
}
