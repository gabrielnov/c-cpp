#include <iostream>
#include <string>

using namespace std;

int vogais(string p){
	int cont = 0;
	char v[5] = {'a','e','i','o','u'};
	for(int i =0; i < p.size(); i++){

		for (int j = 0; j < 5; j++){
			if (p[i] == v[j]){
				cont++;
				break;
			}
		}
	}

	return cont;
}

int main(){

	cout << vogais("aaaaa")  << endl;
  cout << vogais("bbbae")  << endl;
  cout << vogais("aeiou")  << endl;
	

}