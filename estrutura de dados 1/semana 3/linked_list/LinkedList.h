// LinkedList.h
#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

#include "NodeLL.h"
#include <string>

class LinkedList{
	private:
		NodeLL *head;
		int qtde;
	public:	
		LinkedList();
		~LinkedList();
		bool isEmpty();
		bool isFull();
		bool insertHead(int id);
		bool insertTail(int id);
		NodeLL *search(int id);
		bool remove(int id);
		void clear();
		void print();			
			
		void aumentaQtde() { qtde++;}
		void diminuiQtde() { qtde--;}
		int getQtde(){ return qtde; }
		NodeLL* getHead(void){ return head; };
		void setHead(NodeLL *head) { this->head = head;	}
		
};

#endif
