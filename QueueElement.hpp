#ifndef QUEUEELEMENT_HPP
#define QUEUEELEMENT_HPP

#include "QueueElementData.hpp"

class QueueElement
{
	QueueElementData data; 
	QueueElement* next; 
public:
	QueueElement();
	QueueElement(QueueElementData p_data, QueueElement* p_next);
	QueueElement* GetNext(); 
	QueueElementData GetElementData();
	void SetNext(QueueElement* p_next);
	~QueueElement();

};

#endif // QUEUEELEMENT_HPP
