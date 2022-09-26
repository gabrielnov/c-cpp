#include <iostream>

using namespace std;

class Complexo{
    public:
        float real;
        float imaginario;
        Complexo(){};
        Complexo(float real, float imaginario);
        ~Complexo(){cout << "Número destruído." << endl;};
        Complexo soma(Complexo c2);
        Complexo subtracao(Complexo c2);
        Complexo multiplicacao(Complexo c2);

};

Complexo::Complexo(float r, float i){
    real = r;
    imaginario =i;
}

Complexo Complexo::soma(Complexo c2){
  Complexo r;

  r.real = this->real + c2.real;
  r.imaginario = this->imaginario + c2.imaginario;

  return r;
}

Complexo Complexo::subtracao(Complexo c2){
  Complexo r;

  r.real = this->real - c2.real;
  r.imaginario = this->imaginario - c2.imaginario;

  return r;
}


Complexo Complexo::multiplicacao(Complexo c2){
  Complexo r;

  r.real = (this->real * c2.real) - (this->imaginario * c2.imaginario);
  r.imaginario = (this->real * c2.imaginario) + (c2.real * this->imaginario);

  return r;
}


int main(){
    
    Complexo c1 (5, 5);
    Complexo c2 (2, 3);
    
    Complexo c3 = c1.soma(c2);
    Complexo c4 = c1.subtracao(c2);

    cout << "Soma: " << c3.real << " + " << c3.imaginario << "i" << endl;
    cout << "subtracao: " << c4.real << " + " << c4.imaginario << "i" << endl;
    return 0;

}