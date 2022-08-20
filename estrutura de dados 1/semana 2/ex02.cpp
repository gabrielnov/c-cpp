#include <iostream>


using namespace std;
int main() {
  const int MAX =  1000;
  int n;

  do{
    cout << "Informe uma quantidade: "; 
    cin >> n;
  } while (n > 1000);
  
  int v[n];
  for (int i = 0; i < n; i++){
    cout << "Informe um valor: "; 
    cin >> v[i];
  }

  cout << "| ";
  for (int i = n - 1; i >= 0; i--){
    cout << v[i] << " | ";
  } 
}