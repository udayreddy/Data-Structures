// This is the main DLL file.

#include "Stack.h"

Data_Structure::Stack::Stack(){
	top = NULL;
}

void Data_Structure::Stack::push(int data){
	SNode* temp = new SNode(data);
	if (top == NULL){
		top = temp;
	}
	else{
		temp->next = top;
		top = temp;
	}
}

int Data_Structure::Stack::pop(){
	SNode* temp = top;
	top = top->next;
	int val = temp->PrintData();
	delete[] temp;

	return val;
}


int Data_Structure::Stack::Top(){
	if (top != NULL){
		return top->PrintData();
	}
	else{
		return NULL;
	}
}


bool Data_Structure::Stack::isEmpty(){
	if (top == NULL){
		return true;
	}
	return false;
}