#include "QueueElement.hpp"

QueueElement::QueueElement()
{
}

QueueElement::QueueElement(QueueElementData p_data, QueueElement* p_next)
{
	data = p_data; 
	next = p_next; 
}

QueueElement* QueueElement::GetNext()
{
	return next; 
}

QueueElementData QueueElement::GetElementData()
{
	return data; 
}

QueueElement::~QueueElement()
{
	
	
}

void QueueElement::SetNext(QueueElement* p_next)
{
	next = p_next; 
}

