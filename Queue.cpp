#include "Queue.hpp"

Queue::Queue()
{
	front = nullptr; 
	rear = nullptr; 
}

void Queue::Enqueue(string elem) 
{
	QueueElement* temp; 
	temp = new QueueElement(elem, nullptr); //Create new element
	if (IsEmpty()) 
	{
		front = rear = temp; //If the queue is empty, make null and rear point to the element
	}
	else 
	{ 
		rear->SetNext(temp); //Make the last element point to the new element
		rear = temp; //Make rear point to the new element
	}
}

string Queue::Dequeue()
{ 
	if (front == rear)
	{
		QueueElement* auxdata = front; //Auxiliary pointer pointing to the only object in the queue
		string auxelem = auxdata->GetElementData().GetQueueElementData(); //Get value of the element
		front = nullptr; 
		rear = nullptr; //Make front and rear point to null
		delete auxdata; //Delete element
		return auxelem; //Return value of the element
	}
	else 
	{ 
		QueueElement* auxdata = front; //Auxiliary pointer pointing to the object on the front
		string auxelem = auxdata->GetElementData().GetQueueElementData(); //Get value of the element
		front = front->GetNext(); //Make front point to the next element
		delete auxdata; //Delete element
		return auxelem; //Return value of the element
	}
}

bool Queue::IsEmpty() 
{
	return front == nullptr && rear == nullptr; 
}

void Queue::MakeNull() 
{
	while (front != nullptr)
	{
		QueueElement* temp; 
		temp = front; //Auxiliary pointer pointing to the object on the front
		front = front->GetNext(); //Make front point to the nexr element
		delete temp; //Delete object
	}
	front = nullptr; 
	rear = nullptr; //Make front and rear point to null
} //This is done because C++ doesn't have a garbage collector

int Queue::Length() 
{
	QueueElement* temp; //Create auxiliary counter
	temp = front; 
	int counter = 0; 
	while (temp != nullptr) //browse the queue, adding 1 to the counter for every element
	{
		counter = counter + 1;
		temp = temp->GetNext(); 
	}
	return counter; 
}

string Queue::SeeFront()
{
	return front->GetElementData().GetQueueElementData(); 
}

Queue::~Queue()
{
}

