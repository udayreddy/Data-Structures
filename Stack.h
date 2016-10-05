// Stack.h
#ifndef _STACK_H_
#define _STACK_H_

#include "Node.h"

#define SUCCESS 0
#define FAIL 1


namespace Data_Structure {

	class Stack
	{
		SNode* top;
	public:
		Stack();
		void push(int data);
		int pop();
		int Top();
		bool isEmpty();
	};

}

#endif