#include <iostream>

using namespace std;

struct Complexo{
float real;
float imaginario;
};

void leComplexo_1(Complexo &c){
   cout << c.real << " + " << c.imaginario << "i" << endl;   
}

Complexo leComplexo_2(){
  Complexo c;

  cout << "informe o numero real: ";
  cin >> c.real;
  cout << "informe o numero imaginario: ";
  cin >> c.imaginario;

  return c;
}

Complexo soma(Complexo c1, Complexo c2){
  Complexo r;

  r.real = c1.real + c2.real;
  r.imaginario = c1.imaginario + c2.imaginario;

  return r;
}

Complexo subtracao(Complexo c1, Complexo c2){
  Complexo r;

  r.real = c1.real - c2.real;
  r.imaginario = c1.imaginario - c2.imaginario;

  return r;
}


Complexo multiplicacao(Complexo c1, Complexo c2){
  Complexo r;

  r.real = (c1.real * c2.real) - (c1.imaginario * c2.imaginario);
  r.imaginario = (c1.real * c2.imaginario) + (c2.real * c1.imaginario);

  return r;
}


int main() {

  
    Complexo c1 = leComplexo_2();
    Complexo c2 = leComplexo_2();
    Complexo r = multiplicacao(c1, c2);
    cout << r.real << " + " << r.imaginario << "i" << endl;
    return 0;
}