#ifndef QUEUEELEMENTDATA_HPP
#define QUEUEELEMENTDATA_HPP

#include <iostream>
#include <string>

using namespace std; 
class QueueElementData
{
	string data; 
	
public:
	QueueElementData();
	QueueElementData(string p_data);
	void SetQueueElementData (string p_data);
	string GetQueueElementData();
	~QueueElementData();

};

#endif // QUEUEELEMENTDATA_HPP
