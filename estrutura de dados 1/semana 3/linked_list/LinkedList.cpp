#include <string>
#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList(){
	head = nullptr;
	qtde = 0;
};
LinkedList::~LinkedList(){
	clear();
};

// Libera mem�ria 
void LinkedList::clear(){
	NodeLL *pAnt, *pAnda = head;
	
	while(pAnda != nullptr){
		pAnt = pAnda;  // Libera o n�
		pAnda = pAnda->getProx();
		pAnt->setProx(nullptr);
		delete pAnt;
		pAnt = nullptr;
	}
	head = nullptr;	
}

bool LinkedList::isEmpty(){
	if (getHead() == nullptr) return true;
	else return false;
};

bool LinkedList::isFull(){
	NodeLL *aux = new NodeLL();
	
	if (aux == nullptr) return true;

	aux = nullptr;
	return false;
};
		
bool LinkedList::insertHead(int id){
	NodeLL *aux;
    if (!isFull()){
      aux = new NodeLL(id, nullptr);
      if (isEmpty()){ // Lista est� vazia
        head = aux;
      }else { // Insere no come�o e atualiza o ponteiro
      	aux->setProx(head);
      	head = aux;
      }
      
      aumentaQtde();
      return true;
    }
    else return false; // std::cout << "Overflow � Sem mem�ria";
};

bool LinkedList::insertTail(int id){
	NodeLL *aux, *pAnda;
    if (!isFull()){
      aux = new NodeLL(id, nullptr);
      if (isEmpty()){ // Lista est� vazia
        head = aux;
      }else { // Insere no final e atualiza o ponteiro
        pAnda = head;  // Ponteiro que anda at� o final da lista 
        while (pAnda->getProx() != nullptr)
           pAnda = pAnda->getProx();
        pAnda->setProx( aux );
      }
      
      aumentaQtde();
	  return true;
    }
    else return false; // std::cout << "Overflow � Sem mem�ria";
};

		
NodeLL* LinkedList::search(int id){
	NodeLL *pAnda;
	
    if (isEmpty()) {
		return nullptr; // Lista vazia
    }else{
      pAnda = head;
      // procura a posi��o do elemento na lista
      while ((pAnda != nullptr) && (pAnda->getId() != id))
        pAnda = pAnda->getProx();
      return pAnda; // Retorna a refer�ncia para o elemento	encontrado
    }
}

bool LinkedList::remove(int id){
	NodeLL *pAnt = nullptr, *pAnda;
    if (isEmpty()) return false; // Lista vazia
    else{
      pAnda = head;
      // procura a posi��o do elemento na lista
      while ((pAnda != nullptr) && (pAnda->getId() != id)){
        pAnt = pAnda;
        pAnda = pAnda->getProx();
      }
      if (pAnda == nullptr) return false; // Se n�o encontrou o elemento
      // Se elemento encontrado remove da lista
      else {
      	// se o elemento encontrado est� na cabe�a da lista
      	if ((head == pAnda)) {
		  head = pAnda->getProx();
	    } else{ // remove elemento do meio/fim
	    	pAnt->setProx(pAnda->getProx());
		}
		delete pAnda;
      	pAnda = nullptr;
      	
      	diminuiQtde();
      	return true;   
      }
    }
}

void LinkedList::print(){
	NodeLL *pAnda; 
    std::cout << "L: [ " ;
    pAnda = head;
    while (pAnda != nullptr) {
      std::cout << pAnda->getId() << " ";
      pAnda = pAnda->getProx();
    }
    std::cout <<  "]\n";
}
		

