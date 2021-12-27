#include "DicTreeData.hpp"

DicTreeData::DicTreeData()
{
}

DicTreeData::DicTreeData(char p_letter, bool p_last)
{
	Lastletter = p_last; 
	Letter = p_letter; 
}

DicTreeData::~DicTreeData()
{
}

void DicTreeData::setLetter(char p_letter)
{
	Letter = p_letter; 
}

char DicTreeData::getLetter()
{
	return Letter; 
}

void DicTreeData::setLast(bool last)
{
	Lastletter = last; 
}

char DicTreeData::getLast()
{
	return Lastletter; 
}


