#include "ListElement.hpp"

ListElement::ListElement()
{
}

ListElement::ListElement(ListElementData* p_data, ListElement* p_next)
{
	data = p_data;
	next = p_next; 
}

ListElement::~ListElement()
{
}

void ListElement::setData(ListElementData* p_data)
{
	data = p_data; 
}

ListElementData* ListElement::getData()
{
	return data; 
}

void ListElement::setNext(ListElement* p_next)
{
	next = p_next; 
}

ListElement* ListElement::getNext()
{
	return next; 
}