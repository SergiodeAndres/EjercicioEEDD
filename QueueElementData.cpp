#include "QueueElementData.hpp"

QueueElementData::QueueElementData()
{
}

QueueElementData::QueueElementData(string p_data)
{
	data = p_data;
}

void QueueElementData::SetQueueElementData(string p_data)
{
	data = p_data;
}

string QueueElementData::GetQueueElementData()
{
	return data;
}
QueueElementData::~QueueElementData()
{
}

