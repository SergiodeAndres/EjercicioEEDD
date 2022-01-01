#ifndef LISTELEMENT_HPP
#define LISTELEMENT_HPP
#include "ListElementData.hpp"

class ListElement
{
	ListElementData* data; 
	ListElement* next; 
public:
	ListElement();
	ListElement(ListElementData* p_data, ListElement* p_next);
	void setData(ListElementData* p_data);
	ListElementData* getData(); 
	void setNext(ListElement* p_next);
	ListElement* getNext(); 
	~ListElement();

};

#endif // LISTELEMENT_HPP
