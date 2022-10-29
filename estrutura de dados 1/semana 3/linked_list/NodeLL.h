// NodeLL.h
#ifndef __NODE_LL_H__
#define __NODE_LL_H__


class NodeLL  // ll = linked List
{
public:
	NodeLL(){ id =0; prox = nullptr;	};
	NodeLL(int id, NodeLL* prox){
			this->id = id;
			this->prox = prox;
	};
	~NodeLL();

	NodeLL *getProx() { return prox; };
	int getId(){ return id; };
	
	void setProx(NodeLL *prox) { this->prox = prox; };
	void setId(int id) { this->id = id;	};
	
private:
    int id;
	NodeLL *prox;
};

#endif
