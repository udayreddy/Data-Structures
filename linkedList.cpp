
#include "linkedList.h"

//SinglylinkedList
Data_Structure::SinglylinkedList::SinglylinkedList(){
		head = NULL;
}


int Data_Structure::SinglylinkedList::InsertNode(int data){
	SNode* temp = new SNode(data);
	if (head == NULL){
			head = temp ;
		}
	else{
		temp->next = head;
		head = temp;
	}
	return SUCCESS;
};

int Data_Structure::SinglylinkedList::InsertNode(int data, int pos){
	SNode* temp = new SNode(data);
	SNode* runner = head;
	if (head == NULL){
			return FAIL;
		}
	else{
		for(int i = 1 ; i < pos-1; i++){
			runner = runner->next;
		}
		temp->next = runner->next;
		runner->next = temp;
	}
	return SUCCESS;
}

void Data_Structure::SinglylinkedList::PrintList(){
		SNode* temp = head;

		while (temp != NULL){
			std::cout << temp->PrintData() << "->";
			temp = temp->next;
		}
		std::cout << std::endl;
}

int Data_Structure::SinglylinkedList::DeleteList(){
		SNode* temp = head;

		while (head != NULL){
			head = head->next;
			delete[] temp;
			temp = head;
		}
		return SUCCESS;
}

int Data_Structure::SinglylinkedList::DeleteNode(int pos){
	SNode* runner = head;
	SNode* temp;
	if (head == NULL){
			return FAIL;
		}
	else{
		for(int i = 1 ; i < pos-1; i++){
			runner = runner->next;
		}
		temp = runner->next;
		runner->next = runner->next->next;
		delete[] temp;
	}
	return SUCCESS;
}

int Data_Structure::SinglylinkedList::ReverseList(){
		SNode* curr,*prev,*next;
		curr = head;
		prev = NULL ;
		while (curr != NULL){
				next  = curr->next;
				curr->next = prev;
				prev = curr;
				curr = next;
		}
		head = prev;
		return SUCCESS;
}

void Data_Structure::SinglylinkedList::ReverseListRecurr(SNode* node){
		if(node == NULL){
			node = head;
		}

		if (node->next == NULL){
				head  = node;
				return;
		}
		this->ReverseListRecurr(node->next);
		SNode* temp = node->next;
		temp->next = node;
		node->next = NULL;
}


//DoublylinkedList
Data_Structure::DoublylinkedList::DoublylinkedList(){
		head = NULL;
		tail = NULL;
}


int Data_Structure::DoublylinkedList::InsertNode(int data){
	DNode* temp = new DNode(data);
	if (head == NULL){
			head = temp;
			tail = temp;
		}
	else{
		temp->next = head;
		head->prev = temp;
		head = temp;
	}
	return SUCCESS;
};

int Data_Structure::DoublylinkedList::InsertNode(int data, int pos){
	DNode* temp = new DNode(data);
	DNode* runner = head;
	if (head == NULL){
			return FAIL;
		}
	else{
		for(int i = 1 ; i < pos-1; i++){
			runner = runner->next;
		}
		temp->next = runner->next;
		temp->prev = runner;
		runner->next->prev = temp;
		runner->next = temp;
	}
	return SUCCESS;
}

void Data_Structure::DoublylinkedList::PrintList(){
		DNode* temp = head;
		std::cout << "Forward: " ;
		while (temp != NULL){
			std::cout << temp->PrintData() << "->";
			temp = temp->next;
		}
		std::cout << std::endl;
		std::cout << "Backward:" ;
		temp = tail;
		while (temp != NULL){
			std::cout << temp->PrintData() << "->";
			temp = temp->prev;
		}
		std::cout << std::endl;
}

int Data_Structure::DoublylinkedList::DeleteList(){
		DNode* temp = head;

		while (head != NULL){
			head = head->next;
			delete[] temp;
			temp = head;
		}
		return SUCCESS;
}

int Data_Structure::DoublylinkedList::DeleteNode(int pos){
	DNode* runner = head;
	DNode* temp;
	if (head == NULL){
			return FAIL;
		}
	else{
		for(int i = 1 ; i < pos-1; i++){
			runner = runner->next;
		}
		temp = runner->next;
		runner->next = runner->next->next;
		delete[] temp;
	}
	return SUCCESS;
}


