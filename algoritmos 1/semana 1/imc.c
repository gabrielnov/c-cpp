#include <stdio.h>

int main() {
  float peso, altura;
  float imc;
  
  printf("Informe o peso: ");
  scanf("%f", &peso);
  printf("Informe a altura: ");
  scanf("%f", &altura);

  imc = (peso / (altura * altura));

  printf("IMC = %.2f\n", imc);
  
  if (imc <= 18.4){
    printf("Abaixo do peso\n");
  }
  else if(imc >= 18.5 && imc <= 24.9){
    printf("Peso normal\n");
  }
  else if(imc >= 25 && imc <= 29.9){
    printf("Sobrepeso\n");
  }
  else if(imc >= 30 && imc <= 34.9){
    printf("Obesidade Grau 1\n");
  }
  else if(imc >= 35 && imc <= 39.9){
    printf("Obesidade Grau 2\n");
  }
  else{
    printf("Obesidade Grau 3\n");
  }
  
  return 0;
}
  