#include "ListElementData.hpp"

ListElementData::ListElementData()
{
}

ListElementData::ListElementData(int p_rep, string p_word)
{
	repeatition = p_rep;
	word = p_word; 
}

void ListElementData::setRepeats(int p_rep)
{
	repeatition = p_rep;
}

int ListElementData::getRepeats()
{
	return repeatition;
}

void ListElementData::setWord(string p_word)
{
	word = p_word;
}

string ListElementData::getWord()
{
	return word;
}

ListElementData::~ListElementData()
{
}

