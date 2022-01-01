#ifndef QUEUE_HPP
#define QUEUE_HPP

#include "QueueElement.hpp" 

class Queue
{
	QueueElement* front; 
	QueueElement* rear; 
public:
	Queue();
	void Enqueue(string elem); //Add element to queue
	string Dequeue(); //Remove element from queue
	bool IsEmpty(); //Check if queue is empty
	void MakeNull(); //Make queue empty
	int Length(); //Length of queue
	string SeeFront(); //See first element of queue
	~Queue();

};

#endif // QUEUE_HPP
