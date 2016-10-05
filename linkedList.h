// linkedList.h
#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_

#include "Node.h"

#define SUCCESS 0
#define FAIL 1

namespace Data_Structure {

	class SinglylinkedList
	{
		SNode* head;

	public:
		SinglylinkedList();
		int InsertNode(int data);
		int InsertNode(int data, int pos);
		int DeleteList();
		int DeleteNode(int pos);
		int ReverseList();
		void ReverseListRecurr(SNode* node);
		void PrintList();
	};

	class DoublylinkedList
	{
		DNode* head;
		DNode* tail;
	public:
		DoublylinkedList();
		int InsertNode(int data);
		int InsertNode(int data, int pos);
		int DeleteNode(int pos);
		int DeleteList();
		void PrintList();

	};
}

#endif