// Queue.h

#include "Node.h"

#define SUCCESS 0
#define FAIL 1


namespace Data_Structure {

	class Queue
	{
		DNode* front;
		DNode* back;
	public:
		Queue();
		void Enqueue(int data);
		int Dequeue();
		bool isEmpty();
		int Front();
	};
}
