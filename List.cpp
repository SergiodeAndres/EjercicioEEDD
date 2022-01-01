#include "List.hpp"

List::List()
{
	header = nullptr; 
}

List::~List()
{
}

bool List::isEmpty()
{
	return header == nullptr; 
}

int List::length()
{
	ListElement* temp; //Create auxiliary pointer and make it point to the same place as header
	temp = header; 
	int counter = 0; 
	if (isEmpty())
	{
		counter = 0; //If the list is empty, there's 0 elements
	}
	else 
	{
		counter = 1; //If the list is not empty, there's at least 1 element
		temp = temp->getNext(); 
		while (temp != nullptr) //Add to the length while the auxiliary pointer is not pointing to the same place as header
		{ 
			temp = temp->getNext();
			counter = counter + 1;
		}
	}
	return counter; //Return the length
}

void List::insert(string s, int position)
{
	ListElement* temp;  
	ListElement* aux;
	int counter = 0;
	ListElementData* data = new ListElementData(1, s); 
	temp = new ListElement(data, nullptr); //Create the element with pointer pointing to null
	aux = header; 
	if (isEmpty()) // the list is empty 
	{
		header = temp; //Make header point to the element
	}
	else
	{
		while (aux != nullptr)
		{
			if (counter == position)
			{
				temp->setNext(aux->getNext()); 
				aux->setNext(temp); 
			}
			counter = counter + 1; 
			aux = aux->getNext(); 
		}
	}
}

ListElement* List::retrieve(int position)
{
	int counter = 0; 
	ListElement* aux = header; 
	ListElement* elem;
	while (aux != nullptr)
	{
		if (counter == position)
		{
			elem = aux; 
		}
		counter = counter + 1; 
		aux = aux->getNext(); 
	}
	return elem; 
}

void List::remove(int position)
{
	int counter = 0; 
	ListElement* aux = header; 
	ListElement* elem;
	if (length() == 1)
	{
		delete aux; 
		header = nullptr; 
	}
	else 
	{
		if (position == 0)
		{
			header = header->getNext(); 
			delete aux; 
		}
		else 
		{
			while (aux != nullptr)
			{
				if (counter + 1 == position)
				{
					elem = aux->getNext();
					aux->setNext(aux->getNext()->getNext()); 
					delete elem; 
				}
				counter = counter + 1; 
				aux = aux->getNext(); 
			}
		}
	}
}

bool List::isInList(string s)
{
	ListElement* aux = header; 
	bool found; 
	while (aux != nullptr)
	{
		if (aux->getData()->getWord() == s)
		{
			found = true;
		}
		aux = aux->getNext();
	}
	return found; 
}

void List::specialInsert(string s)
{
	if (isInList(s))
	{
		increaseRep(s); 
	}
	else 
	{
		insert(s, 0); 
	}
}

void List::increaseRep(string s)
{
	ListElement* aux = header;  
	while (aux != nullptr)
	{
		if (aux->getData()->getWord() == s)
		{
			int reps = aux->getData()->getRepeats(); 
			reps = reps + 1; 
			aux->getData()->setRepeats(reps); 
		}
		aux = aux->getNext();  
	}
}