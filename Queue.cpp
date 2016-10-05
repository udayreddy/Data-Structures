// This is the main DLL file.

#include "Queue.h"

Data_Structure::Queue::Queue(){
	front = NULL;
	back = NULL; 
}

void Data_Structure::Queue::Enqueue(int data){
	DNode* temp = new DNode(data);	
	if (back == NULL){
			back = temp;
			front = temp;
	}
	else{
		temp->next = back;
		back->prev = temp;
		back = temp;
	}
}

int Data_Structure::Queue::Dequeue(){
	if(front != NULL){
		DNode* temp = front;
		front = front->prev ;
		int val = temp->PrintData();
		delete[] temp;
		return val;
	}
	return NULL;
}

int Data_Structure::Queue::Front(){
	if(front != NULL){
		return front->PrintData();
	}
	else{
		return NULL;
	}
}

bool Data_Structure::Queue::isEmpty(){
	if (front == NULL){
		return true;
	}
	return false;
}