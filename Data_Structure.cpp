// Data_Structure.cpp : Defines the entry point for the console application.
//

#include "linkedList.h"
#include "Stack.h"
#include "Queue.h"
#include "Arrays.h"
#include "Strings.h"
#include "Search.h"

#define ARRAY_SIZE 15
using namespace Data_Structure;


int main()
{
	int i ;

	//SinglylinkedList
	SinglylinkedList S;
	S.InsertNode(1);
	S.InsertNode(2);
	S.InsertNode(3);
	S.InsertNode(4);
	S.InsertNode(5);
	S.PrintList();
	S.InsertNode(6,4);
	S.PrintList();
	S.DeleteNode(3);
	S.PrintList();
	S.ReverseList();
	S.PrintList();
	SNode* temp = NULL;
	S.ReverseListRecurr(temp);
	S.PrintList();
	S.DeleteList();
	

	//DoublylinkedList
	DoublylinkedList D;
	D.InsertNode(1);
	D.InsertNode(2);
	D.InsertNode(3);
	D.InsertNode(4);
	D.InsertNode(5);
	D.InsertNode(6);
	D.PrintList();
	D.InsertNode(9,4);
	D.PrintList();
	
	//Stack

	Stack s;
	if (s.isEmpty() == true ){
		std::cout << "Empty" << std::endl;
	}
	s.push(1);
	s.push(2);
	s.push(3);
	std::cout << "POP:" << std::endl;
	std::cout << s.pop() << std::endl;
	s.push(4);
	s.push(8);
	s.push(5);
	s.push(7);
	std::cout << "Top:" << s.Top() << std::endl;
	std::cout << "POP:" << std::endl;
	while (s.isEmpty() != true){
		std::cout << s.pop() << std::endl;
	}
	std::cout << "Top:" << s.Top() << std::endl;

	//Queue
	Queue q;
	if (q.isEmpty() == true ){
		std::cout << "Empty" << std::endl;
	}
	std::cout << "ENQUEUE:" << std::endl;
	q.Enqueue(1);
	q.Enqueue(2);
	std::cout << "DEQUEUE:" << std::endl;
	std::cout << q.Dequeue() << std::endl;
	std::cout << "ENQUEUE:" << std::endl;
	q.Enqueue(3);
	q.Enqueue(4);
	q.Enqueue(5);
	std::cout << "DEQUEUE:" << std::endl;
	std::cout << q.Dequeue() << std::endl;
	std::cout << "ENQUEUE:" << std::endl;
	q.Enqueue(6);
	q.Enqueue(7);
	std::cout << "DEQUEUE:" << std::endl;
	std::cout << q.Dequeue() << std::endl;
	std::cout << "ENQUEUE:" << std::endl;
	q.Enqueue(8);
	q.Enqueue(9);
	std::cout << "Front:" << q.Front() << std::endl;
	q.Enqueue(10);
	q.Enqueue(11);
	q.Enqueue(17);
	std::cout << "Front:" << q.Front() << std::endl;
	std::cout << "DEQUEUE:" << std::endl;
	while (q.isEmpty() != true){
		std::cout << q.Dequeue() << std::endl;
	}
	std::cout << "Front:" << q.Front() << std::endl;
	
	//Insertion Sorting
	int insertion[ARRAY_SIZE] = {6,8,12,65,23,1,9,4,654,888,3,1,90,65,2};
	ExecuteSort(Insertion,insertion,ARRAY_SIZE);

	//Selection Sorting
	int selection[ARRAY_SIZE] = {6,8,12,65,23,1,9,4,654,888,3,1,90,65,2};
	ExecuteSort(Selection,selection,ARRAY_SIZE);

	//Bubble Sorting
	int bubble[ARRAY_SIZE] = {6,8,12,65,23,1,9,4,654,888,3,1,90,65,2};
	ExecuteSort(Bubble,bubble,ARRAY_SIZE);


	//Merge Sorting
	int merge[ARRAY_SIZE] = {6,8,12,65,23,1,9,4,654,888,3,1,90,65,2};
	ExecuteSort(Merge,merge,ARRAY_SIZE);


	//Quick Sorting
	int quick[ARRAY_SIZE] = {6,8,12,65,23,1,9,4,654,888,3,1,90,65,2};
	ExecuteSort(Quick,quick,ARRAY_SIZE);


	// binary search 
	std::cout << "Location : " << (quick, ARRAY_SIZE, 4) << std::endl;
	std::cout << "Location : " << (quick, ARRAY_SIZE, 90) << std::endl;
	std::cout << "Location : " << (quick, ARRAY_SIZE, 1) << std::endl;
	//String manipulation 
	std::string input = "blllehB$Biee!@oncauytemPPP{jfasyhjn**dfa";
	Duplicates(input);
	Anagram("hello","ovals");
	Anagram("mary","army");
	
	
	std::cin >> i;
	return 0;
}

