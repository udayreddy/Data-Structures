#ifndef _NODE_H_
#define _NODE_H_

#include <iostream>

#define SUCCESS 0
#define FAIL 1

namespace Data_Structure {

	class SNode {
		int Data;
	public:
		SNode* next;
		SNode(int data){
			Data = data;
			next = NULL;
		}
		int PrintData(){
			return Data;
		}
	};

	class DNode {
		int Data;
	public:
		DNode* next;
		DNode* prev;
		DNode(int data){
			Data = data;
			next = NULL;
			prev = NULL;
		}
		int PrintData(){
			return Data;
		}
	};

}

#endif