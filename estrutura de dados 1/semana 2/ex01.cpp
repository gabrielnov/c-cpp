#include <iostream>

using namespace std;

int main(){
    const int MAX = 100;
    int n, preant, atual, ant;

    do{
        cout << "Digite a quantidade de números de Fibonacci a exibir: ";
        cin >> n;
    } while (n < 0 || n >MAX);

    if (n < 2){
        cout << n << endl;
    }
    else{
        ant = 1;
        preant = 1;
        cout << ant << endl << preant << endl;
        for (int i = 3; i <= n; i++){
            atual = ant +preant;
            cout << atual << endl;
            preant = ant;
            ant = atual;
        }

    }
}